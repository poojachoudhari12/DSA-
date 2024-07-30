#include<stdio.h>
void main()
{
	char ch;
	printf("\ntype a character:");
	scanf("%c",&ch);
	if(ch==0||ch==1)
    	printf("binary");
	else
		printf("other");
	return;	
}