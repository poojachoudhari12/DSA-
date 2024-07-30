#include<stdio.h>
void main()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	printf("\nno:%d is %s",x,(x==0)?"zero":"non zero");
	return;
}