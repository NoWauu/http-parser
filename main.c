#include <stdio.h>
#include <string.h>

struct requestParse {
    char *host;
};

int main() {

    char * req  = "GET /\r\n"
                  "Host: 127.0.0.1:8080\r\n"
                  "Connection: keep-alive\r\n"
                  "Cache-Control: max-age=0\r\n"
                  "sec-ch-ua: \"Not_A Brand\";v=\"8\", \"Chromium\";v=\"120\", \"Google Chrome\";v=\"120\"\r\n"
                  "sec-ch-ua-mobile: ?0\r\n"
                  "sec-ch-ua-platform: \"Linux\"\r\n"
                  "DNT: 1\r\n"
                  "Upgrade-Insecure-Requests: 1\r\n"
                  "User-Agent: Mozilla/5.0 (X11; Linux x86_64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/120.0.0.0 Safari/537.36\r\n"
                  "Accept: text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.7\r\n"
                  "Sec-Fetch-Site: none\r\n"
                  "Sec-Fetch-Mode: navigate\r\n"
                  "Sec-Fetch-User: ?1\r\n"
                  "Sec-Fetch-Dest: document\r\n"
                  "Accept-Encoding: gzip, deflate, br\r\n"
                  "Accept-Language: fr-FR,fr;q=0.9,en-US;q=0.8,en;q=0.7\r\n"
                  "\r\n"
                  "Request body is here :3\r\n"
                  "\r\n"
                  "\r\n";

    char *r = strstr(req, "Sec-Fetch-Site");


    printf("%s", req);

    return 0;
}
