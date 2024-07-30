#include<stdio.h>
void main()
{
	char x;
	printf("enter character:");
	scanf("%c",&x);
	printf("%c is %s",x,(x>=48&&x<=57)?"digit":"other");
	return;
}