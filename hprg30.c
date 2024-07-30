#include<stdio.h>
#include<string.h>
void main()
{
	int i=0;
	char p[40];
	printf("\n enter string:");
	gets(p);
	while(p[i]!='\0')
	{
		printf("%c",p[i]);
		i++;
	}
	printf("\n length of string:%d",i++);
	return; 
}