#include<stdio.h>
void main()
{
	int n;
	int i,j;
	printf("enter no of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+3;j++)
		{
			
			if(i+j>=5&&i+j<=7)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return;
}