#include<stdio.h>
void main()
{	
	int x,y,temp;
	printf("Enter two no:");
	scanf("%d %d",&x,&y);
	printf("\nx:%d,y:%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\nx:%d,y:%d",x,y);
	return;
}