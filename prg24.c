#include<stdio.h>
void main()
{
	char ch;
	printf("type a character:");
	scanf("%c",&ch);
	printf("\n%c is %s",ch,((ch>='A'&&ch<='Z')?"uppercase":"other"));
	return;
	
}