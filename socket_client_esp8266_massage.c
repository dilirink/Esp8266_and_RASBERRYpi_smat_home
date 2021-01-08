#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <string.h>

#define PORT 8076

int main(int argc, char const *argv[])
{
    int i;
    int sock = 0;
    struct sockaddr_in serv_addr;

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = inet_addr(argv[1]);
    serv_addr.sin_port = htons(atoi(PORT));

    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
    {
        printf("ERROR SOCKET\n");
        exit(1);
    }

    if (connect(connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0)
    {
        close(sock_fd);
        exit(1);
    }

    if (send(sock_fd, ptr->cord_buffer, strlen(ptr->cord_buffer), MSG_NOSIGNAL) <= 0)
    {
        exit(1);
    }

    return 0;
}