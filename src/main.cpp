#include "WebCrawler.h"
#include <iostream>

int main() {
    std::cout << "[INFO] Program started" << std::endl;

    WebCrawler crawler;
    crawler.Crawl("https://example.com");

    std::cout << "[INFO] Program finished" << std::endl;
    return 0;
}



