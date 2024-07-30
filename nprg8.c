#include<stdio.h>
void main()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	printf("no:%d is %s",x,((x%2==0)?"even":"odd"));
	return;
}