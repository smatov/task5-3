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
	while(*(++s));
	while(*t)
	{
		*s++=*t++;
	}
	*s='\0';

}

int main() {
	char a[256];
	char b[256];
	strcpy(a,"vasya");
	strcpy(b,"petya");
	addstr(a,b);
	printf("%s\n",a);
	return 0;

}
