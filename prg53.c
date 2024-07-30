#include<stdio.h>
void main()
{
	char ch;
	printf("\nenter character :");
	scanf("%c",&ch);
	printf("\n%c is %s",ch,((ch>=48)&&(ch<=57))?"digit":"other");
	return;

}