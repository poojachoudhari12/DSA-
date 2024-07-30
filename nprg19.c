#include<stdio.h>
void main ()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	printf("\n%d is %s",x,((x<0)?"below 0":(x>100)?"above 100":"within 0-100"));
	return;
}