#include<stdio.h>
void main()
{
	char ch;
	printf("type a character");
	scanf("%c",&ch);
	if(ch=='0'||ch=='1')
	{
		printf("\nhex digit");
	}
	else
		printf("\nother");
	return;	
}
