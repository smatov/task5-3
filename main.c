/*
 * main.c
 *
 *  Created on: 26.03.2013
 *      Author: dev
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <fcntl.h>

void addstr(char *s, char *t){
	while(*(s)) s++;
	while(*t){
		*s=*t;
		s++;
		t++;
	}
}

int main() {
	char *b=malloc(sizeof(char)*50);
	char *a=malloc(sizeof(char)*50);
	strcpy(a,"abcde100000");
	strcpy(b,"petya");
	addstr(a,b);
	printf("%s\n",a);
	free(a);
	free(b);
	return 0;

}
