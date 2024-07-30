#include<stdio.h>
void main()
{
	char ch;
	printf("enter no:");
	scanf("%c",&ch);
	printf("%c is %s",ch,((ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?"vowel":"other"));
	return;
}