#include<stdio.h>
void main()
{
	int no;
	char ch;
	printf("enter character:");
	scanf("%c",&ch);
	printf("\nenter no:");
	scanf("%d",&no);
	printf("\n%d",(ch>='A'));
	printf("\n%d",(ch<='z'));
	printf("\n%d",(ch=='e'));
	printf("\n%d",(ch=='f'));
	printf("\n%d",(no>0));
	printf("\n%d",(no<100));
	printf("\n%d",(no%2==0));
	return;
}