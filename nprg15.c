#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	printf("no:%d is %s",no,((no%5==0)?"divisible":"not divisible"));
	return;
}