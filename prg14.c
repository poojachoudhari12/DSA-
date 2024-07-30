#include<stdio.h>
void main()
{
	int a,b;
	printf("Enter no:");
	scanf("%d",&a);
	printf("\na:%d",a);
	a++;
	printf("\na:%d",a);
	++a;
	printf("\na:%d",a);
	b=++a;
	printf("\nb:%d",b);
	b=a++;
	printf("\nb:%d",b);
	return;
	
}
