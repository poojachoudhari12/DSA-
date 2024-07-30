#include<stdio.h>
void main()
{
	int x,y,temp;
	printf("enter no:");
	scanf("%d %d",&x,&y);
	printf("\nx:%d \ny:%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\nx:%d \ny:%d",x,y);
}