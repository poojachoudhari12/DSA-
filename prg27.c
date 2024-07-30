#include<stdio.h>
void main()
{
	char p;
	printf("type a character:");
	scanf("%c",&p);
	printf("%c is %s",p,(p=='b'||p=='B')?"valid":"invalide");
	return;
}