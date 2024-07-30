#include<stdio.h>
void main()
{
	char ch;
	printf("enter char:");
	scanf("%c",&ch);
	printf("%c is %s",ch,((ch=='A'||ch=='Z')?"uppercase":"other"));
	return;
}