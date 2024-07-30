#include<stdio.h>
void main()
{
	int x,y;
	printf("\nenter no:");
	scanf("%d %d",&x,&y);
	if(x>y)
		printf("\nmax:%d",x);
		else
			printf("\nmax:%d",y);
	return;		
}