#include<stdio.h>
void main()
{
	int x,y,z,max;
	printf("enter no:");
	scanf("%d  %d  %d",&x,&y,&z);
	max=(x>y)?'x':'y';
	max=(z>max)?'z':"max";
	printf("\nmax:%d",max);
	return;
}