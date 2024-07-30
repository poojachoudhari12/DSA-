#include<stdio.h>
void main()
{
	int i,j;
	int n;
	printf("enter no:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(i+j>n)
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
	return;
}