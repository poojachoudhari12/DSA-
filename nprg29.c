#include<stdio.h>
void main()
{
	int i=1,x;
	printf("enter no:");
	scanf("%d",&x);
	printf("\ntable\n");
	while(i<=10)
	{
		printf("%d\n",x*i);
		i++;
	}
	return;
}