#include<stdio.h>
void main()
{
	char ch;
	printf("\nType a character:");
	scanf("%c",&ch);
	printf("\n%c is %s",ch,((ch>='A'&&ch<='F')?"hexalphabet":(ch>='0'&&ch<='9')?"hexadecimal":"other character"));
	return;
	
}