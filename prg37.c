#include<stdio.h>
void main()
{
	char ch;
	printf("type a character:");
	scanf("%d",&ch);
	if(ch>='A'||ch<='Z')
		printf("upper case");
	else
		printf("other");
	return;
			
}