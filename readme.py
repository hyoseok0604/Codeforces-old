class Readme:
    def __init__(self, path, clear) -> None:
        self.file = path + "README.md"
        if clear:
            with open(self.file, 'w') as f:
                pass
    
    def write_table_head(self, headers):
        with open(self.file, 'a') as f:
            f.write("\n")
            f.write(" | " + " | ".join(headers) + " | \n")
            f.write(" | " + " | ".join(["---" for _ in range(len(headers))]) + " | \n")

    def write_table_body(self, line):
        with open(self.file, 'a') as f:
            f.write(" | " + " | ".join(line) + " | \n")

    def write_url(self, text, url):
        with open(self.file, 'a') as f:
            f.write

    def url_str(self, text, url) -> str:
        return "[{}]({})".format(text, url)