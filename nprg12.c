#include<stdio.h>
void main()
{
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	printf("\n%c is %s",ch,((ch=='0'||ch=='1')?"binary":"other"));
	return;
}