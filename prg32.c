#include<stdio.h>
void main()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	printf("%d is %s",x,((x%5==0)?((x%7==0)?"divisible by 7&5":"divisible by 5"):(x%7==0)?"divisible by 7":"not divisible by 7&5"));
	return;
}