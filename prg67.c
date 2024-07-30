#include<stdio.h>
void main()
{
	int i,x;
	i=1;
	printf("\nenter no:");
	scanf("%d",&x);
	printf("\ntable");
	while(i<=10)
	{
		printf("\n%4d",x*i);
		i++;
	}
	return;
}