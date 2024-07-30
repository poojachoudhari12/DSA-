#include<stdio.h>
void main()
{
	int x,y;
	printf("enter no:");
	scanf("%d\n%d",&x,&y);
	printf("max:%d",((x>y)?x:y));
	return;
}