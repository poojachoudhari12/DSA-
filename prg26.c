#include<stdio.h>
void main()
{
	char ch;
	printf("\ntype a character:");
	scanf("%c",&ch);
	printf("%c is %s",ch,(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')?"uppercase vowel":"other");
	return;
	
}