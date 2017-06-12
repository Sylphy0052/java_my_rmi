// #include <stdio.h>
// #include <string.h>
// #include <sys/socket.h>
// #include <netinet/in.h>
#include "src/mysocket.h"
#include "src/mystruct.h"
#include "src/parser.h"

int main(int argc, char const *argv[]) {
    int sock = connect_socket();
    struct byte_struct recv_bytes = send_and_receive_socket(sock, "Get Task\n");
    parse(recv_bytes);
    return 0;
}
