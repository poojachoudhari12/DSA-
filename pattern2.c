#include<stdio.h>
void main()
{
	int i,j;
	int n;
	printf("enter no of lines:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j+i<=n+1;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	return;
}