#include<stdio.h>
void main()
{
	int x,y;
	printf("Enter two no:");
	scanf("%d %d",&x,&y);
	printf("max no:");
	printf("%d",(x>y)?x:y);
	return;

}