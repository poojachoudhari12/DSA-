#include<stdio.h>
void main()
{
	int i,j,n=10;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||i==n/2+1||j==1||j==n)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	
	}
	return;
}