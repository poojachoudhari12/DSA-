#include<stdio.h>
void main()
{
	int i,j,n=5;
	for(i=1;i<=n;i++)
	{
		j=1;
		while(j<=i)
		{
			printf("*");
			j++;
		}
		printf("\n");
	}
	return;
}