#include<stdio.h>
void main()
{
	int a,b;
	printf("enter no:");
	scanf("%d",&a);
	printf("\na:%d",a);
	a++;
	printf("a:%d",a);
	++a;
	printf("\na:%d",a);
	b=a++;
	printf("\nb:%d",b);
	b=++a;
	printf("\nb:%d",b);
	return;
}