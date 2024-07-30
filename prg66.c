#include<stdio.h>
void main()
{
	int a,b,c,i;
	a=-1;b=1;i=1;
	printf("\nenter no:");
	while(i<=10)
	{
		c=a+b;
		printf("%4d",c);
		a=b;
		b=c;
		i++;
	}
	return;
}