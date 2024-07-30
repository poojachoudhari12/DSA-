#include<stdio.h>
void main()
{
	int a,b;
	printf("enter no:");
	scanf("%d",&a);
	a=a+3;
	b=a/3;
	printf("\na:%d\nb:%d",a,b);
	b=b*2;
	printf("\nb:%d",b);
	printf("\nb:%d",a/b);
	printf("\nb:%d",a%b);
	return;
}