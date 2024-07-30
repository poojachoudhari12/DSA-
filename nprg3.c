#include<stdio.h>
void main()
{
	int a,b;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("\na:%d",a);
	a=a+2;
	b=a-1;
	printf("\na:%d\nb:%d",a,b);
	b=a*5;
	printf("\nb:%d",b);
	printf("\n%d",b*3);
	printf("\n%d",b/3);
	return;
}