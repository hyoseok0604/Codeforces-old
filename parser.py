import requests
from bs4 import BeautifulSoup

class Contest:
    def __init__(self, title, id, rank, solved, submissions_url, rating_change, new_rating) -> None:
        self.title = title
        self.id = id
        self.rank = rank
        self.solved = solved
        self.submissions_url = submissions_url
        self.rating_change = rating_change
        self.new_rating = new_rating


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
        rank = contest.select_one("td:nth-child(4)").get_text().strip()
        solved = contest.select_one("td:nth-child(5) > a").get_text().strip()
        submissions_url = "https://codeforces.com" + contest.select_one("td:nth-child(5) > a").get_attribute_list("href")[0]
        rating_change = contest.select_one("td:nth-child(6) > span").get_text().strip()
        new_rating = contest.select_one("td:nth-child(7)").get_text().strip()

        _contest = Contest(title, id, rank, solved, submissions_url, rating_change, new_rating)

parse_contests("hyoseok")