#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n||i==j)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return;
}