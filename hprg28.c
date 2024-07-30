#include<stdio.h>
void main()
{
	int i,j,m,n;
	int x[4][4];
	printf("enter the size of row:");
	scanf("%d",&m);
	printf("\n enter the size of coloumn:");
	scanf("%d",&n);
	printf("\n the elemnets of array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&x[i][j]);
		}
		printf("\n");
	}
	printf("\n the elemnets of array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%4d",x[i][j]);
		}
		printf("\n");
	}
		printf("\n the array after transpose:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("%4d",x[j][i]);
		}
		printf("\n");
	}
	printf("\n lower elements zero:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i<=j)	
		printf("%4d",x[i][j]);
		else
		printf("%4d",0);
		}
		printf("\n");
	}
	printf("\n upper elements zero:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i<=j)
		printf("%4d",0);	
		
		else
		printf("%4d",x[i][j]);
		}
		printf("\n");
	}
		printf("\n the diagonal elemnets of array:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		if(i==j)
		printf("%4d",1);
		else
		printf("%4d",x[i][j]);
		}
		printf("\n");
	}
	return;
}