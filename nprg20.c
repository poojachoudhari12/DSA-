#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	printf("%d is %s",no,((no%5==0)?((no%7==0)?"divisible by both":"divisible by 5"):(no%7==0)?"divisible by 7":"not by both"));
	return;
	
}