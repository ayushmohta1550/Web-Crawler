# 🌐 Web Crawler (C++ with libcurl)

A simple **web crawler written in C++** that uses `libcurl` to fetch web pages and `std::regex` to extract hyperlinks. It performs a **BFS (Breadth-First Search)** crawl, starting from a given URL, visiting each page and extracting further links to explore.

---

## 🚀 Features

- 🔗 Fetch HTML using [libcurl](https://curl.se/libcurl/)
- 🔍 Extract links using regular expressions
- 🚫 Skip already-visited URLs with `unordered_set`
- 🧠 Breadth-First Search traversal of discovered URLs
- 🪟 Built and tested using **MSYS2 + clang++ on Windows**

---

## ⚙️ Compilation & Setup (MSYS2 + clang++)

### ✅ Prerequisites

Install [MSYS2](https://www.msys2.org/) and install the following packages via:

```bash
pacman -Syu
pacman -S mingw-w64-x86_64-clang mingw-w64-x86_64-curl
```
Ensure you're using the MSYS2 MinGW64 shell (clang++ and curl must be in PATH).

### 🛠️ Build

```bash
clang++ src/main.cpp src/Crawler.cpp \
  -Iinclude \
  -I/c/curl/curl-8.14.1_2-win64-mingw/include \
  -L/c/curl/curl-8.14.1_2-win64-mingw/lib \
  -lcurl -o main.exe
```

### ▶️ Run
```bash
./main.exe
```

### 🧠 How It Works
    WebCrawler::Crawl
    Uses a std::queue to BFS crawl through links.

    Prints each visited URL and tracks with std::unordered_set.

    WebCrawler::ReadRawHtml
    Uses libcurl to fetch page content.

     Sets headers (like User-Agent) and disables SSL verification for ease.

    WebCrawler::GetLinksFromHtml
    Applies std::regex to extract http and https URLs from page.


### 🖥️ Example Output

```bash
[INFO] Program started
[Crawl] Entered Crawl()
Visiting: https://example.com
[CURL] Downloading: https://example.com
[Crawl] Fetched 1256 bytes
[Parser] Extracted 3 links from HTML
...
[INFO] Program finished
```


