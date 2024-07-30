#include<stdio.h>
void main()
{
	int x;
	printf("\nEnter no:");
	scanf("%d",&x);
	printf("\nNo%d is %s",x,((x%2==0)?"even":"odd"));
	return;
}