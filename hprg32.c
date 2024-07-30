#include<stdio.h>
#include<string.h>
void main()
{
	char p[40],ch;
	int i=0,j;
	printf("\n enter the string:");
	gets(p);
	puts(p);
	j=strlen(p)-1;
	while(i<j)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
		i++;
		j--;
	}
	puts(p);
	return;
}