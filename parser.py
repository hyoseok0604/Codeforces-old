import os
import requests
from bs4 import BeautifulSoup
import dateparser
from requests.sessions import Session

class Contest:
    def __init__(self, title, id, start_time, rank, solved, submissions_url, rating_change, new_rating) -> None:
        self.title = title
        self.id = id
        self.start_time = start_time
        self.rank = rank
        self.solved = solved
        self.submissions_url = submissions_url
        self.rating_change = rating_change
        self.new_rating = new_rating


class Submission:
    def __init__(self, id, url, submit_time, problem_title, problem_url, language, verdict, time, memory) -> None:
        self.id = id
        self.url = url
        self.submit_time = submit_time
        self.problem_title = problem_title
        self.problem_url = problem_url
        self.language = language
        self.verdict = verdict
        self.time = time
        self.memory = memory

    def comment(self, contest: Contest) -> str:
        return """/*
    Contest Name : {}
    Problem Title : {}
    Problem Url : {}
    Verdict : {}
    Time : {}
    Memory : {}
*/

""".format(contest.title, self.problem_title, self.problem_url, self.verdict, self.time, self.memory)


def disable_show_unofficial_submissions(session: Session, url: str):
    response = session.get(url)

    html = response.text
    soup = BeautifulSoup(html, 'html.parser')

    csrf_token = soup.find("meta", attrs={
        "name": "X-Csrf-Token"
    }).get_attribute_list("content")[0]

    response = session.post(url, data={
        "action": "toggleShowUnofficial",
        "csrf_token": csrf_token
    })
    

def parse_contests(handle: str):
    url = "https://codeforces.com/contests/with/" + handle
    response = requests.get(url)

    if response.status_code != 200:
        return None
    
    html = response.text
    soup = BeautifulSoup(html, 'html.parser')
    contests = soup.select("#pageContent > div.datatable > div:nth-child(6) > table > tbody > tr")

    for contest in contests:
        title = contest.select_one("td:nth-child(2) > a").get_text().strip()
        id = contest.select_one("td:nth-child(2) > a").get_attribute_list("href")[0].split("/")[2]
        start_time = dateparser.parse(contest.select_one("td:nth-child(3) > a > span").get_text(),
                                      settings={"TIMEZONE": "MSK", "TO_TIMEZONE": "KST"})
        rank = contest.select_one("td:nth-child(4)").get_text().strip()
        solved = contest.select_one("td:nth-child(5) > a").get_text().strip()
        submissions_url = "https://codeforces.com" + contest.select_one("td:nth-child(5) > a").get_attribute_list("href")[0]
        rating_change = contest.select_one("td:nth-child(6) > span").get_text().strip()
        new_rating = contest.select_one("td:nth-child(7)").get_text().strip()

        _contest = Contest(title, id, start_time, rank, solved, submissions_url, rating_change, new_rating)
        parse_submissions(_contest)


def parse_submissions(contest: Contest):
    session = requests.Session()

    url = contest.submissions_url

    disable_show_unofficial_submissions(session, url)
    
    response = session.get(url)

    if response.status_code != 200:
        return None
    
    html = response.text
    soup = BeautifulSoup(html, 'html.parser')
    submissions = soup.select("table.status-frame-datatable > tr:not(.first-row)")

    for submission in submissions:
        id = submission.select_one("td:nth-child(1) > a").get_text().strip()
        url = "https://codeforces.com" + submission.select_one("td:nth-child(1) > a").get_attribute_list("href")[0].strip()
        submit_time = dateparser.parse(submission.select_one("td:nth-child(2) > span").get_text(),
                                       settings={"TIMEZONE": "MSK", "TO_TIMEZONE": "KST"})
        problem_title = submission.select_one("td:nth-child(4) > a").get_text().strip()
        problem_url = "https://codeforces.com" + submission.select_one("td:nth-child(4) > a").get_attribute_list("href")[0].strip()
        language = submission.select_one("td:nth-child(5)").get_text().strip()
        if not submission.select_one("td:nth-child(6) > span").findChild("span"):
            verdict = submission.select_one("td:nth-child(6) > span").get_text().strip()
        else:
            verdict = submission.select_one("td:nth-child(6) > span > span").get_text().strip()
        time = submission.select_one("td:nth-child(7)").get_text().strip()
        memory = submission.select_one("td:nth-child(8)").get_text().strip()

        _submission = Submission(id, url, submit_time, problem_title, problem_url, language, verdict, time, memory)

        parse_submission(contest, _submission)


def parse_submission(contest: Contest, submission: Submission):
    url = submission.url
    response = requests.get(url)

    if response.status_code != 200:
        return None
    
    html = response.text
    soup = BeautifulSoup(html, 'html.parser')

    comment = submission.comment(contest)
    code = soup.select_one("pre#program-source-text").get_text()

    if not os.path.isdir(contest.title):
        os.mkdir(contest.title)
    
    with open(contest.title + '/' + submission.id + '.' + lang_to_extension(submission.language), 'w') as f:
        f.write(comment)
        f.write(code)


def lang_to_extension(lang: str) -> str:
    if lang.__contains__("C++"):
        return "cpp"
    elif lang.__contains__("Py"):
        return "py"

parse_contests("hyoseok")