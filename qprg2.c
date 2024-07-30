#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	char p[100];
	char *q;
	int i=0,n;
	printf("\nenter string:");
	gets(p);
	n=strlen(p)+1;
	q=(char*)malloc(n*sizeof(char));
	strcpy(q,p);
	puts(p);
	puts(q);
	free(q);
	
		return;
	}
