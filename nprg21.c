#include<stdio.h>
void main()
{
	int x,y;
	printf("enter no:");
	scanf("%d %d",&x,&y);
	if(x>y)
		printf("max:%d",x);
	else
	    printf("max:%d",y);
	return;		

}