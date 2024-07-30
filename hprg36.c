#include<stdio.h>
#include<string.h>
void main()
{
	char p[100];
	int i=0;
	printf("\n enter string:");
	gets(p);
	while(p[i]!='\0')
	{
		if(p[i]>='0'&&p[i]<='9'||p[i]>='A'&&p[i]<='F')
		i++;
		else
		break;
	}
	if(p[i]=='\0')
	printf("\n hexdecimal string");
	else
	printf("\n not decimal string");
	
}