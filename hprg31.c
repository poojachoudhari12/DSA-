#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,x;
	char p[40];
	printf("\n the string:");
	gets(p);
	puts(p);
	x=strlen(p);
	printf("\n the length string:%d",x);
	return;
}