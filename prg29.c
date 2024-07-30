#include<stdio.h>
void main()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	printf("\n%d is %s",x,(x>0)?"positive":(x<0)?"negative":"zero");
	return;
}