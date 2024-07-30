#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter no:");
	scanf("%d %d %d",&a,&b,&c);
	printf("max:%d",a,b,c,(a>b)?((a>c)?a:c):(b>c)?b:c);
	return;
}