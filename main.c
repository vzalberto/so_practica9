#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <netinet/in.h>
#include <netdb.h>

int puerto = 7200;

int main(void){
	struct sockaddr_in msg_to_server_addr, client_addr;
	int s, num[2], res;

	s = socket(AF_INET, SOCK_DGRAM, 0);

	bzero((char +)&msg_to_server_addr, sizeof(msg_to_server_addr));
	msg_to_server_addr.sin_family = AF_INET;
	msg_to_server_addr.sin_addr.s_addr = inet_addr("127.0.0.1")
}