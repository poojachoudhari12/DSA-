#include<stdio.h>
void main()
{
	char ch;
	printf("\nType a character:");
	scanf("%c",&ch);
	printf("\n%c is %s",ch,(ch==0||ch==9)?"binary":"other");
	return;
	
}