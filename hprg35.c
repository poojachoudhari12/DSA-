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
		if(p[i]>='0'&&p[i]<='7')
		i++;
		else
		break;
	}
	if(p[i]=='\0')
	printf("\n octal string");
	else
	printf("\n not octal string");
	return;
}