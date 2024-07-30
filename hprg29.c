#include<stdio.h>
void main()
{  
	int i,j,m,n,p,q;
	int x[10][10],y[10][10],z[10][10];
	printf("\nenter the size of row:\n");
	scanf("%d",&m);
	printf("\n enter the size of coloumn:\n");
	scanf("%d",&n);
	
	printf("\nenter the size of row:\n");
	scanf("%d",&p);
	printf("\n enter the size of coloumn:\n");
	scanf("%d",&q);
	
	printf("\n the elemnets of array x:\n");
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
	
	printf("\n the elemnets of array y:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		scanf("%d",&y[i][j]);
		}
		printf("\n");
	}
	printf("\n the elemnets of array:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		printf("%4d",y[i][j]);
		}
		printf("\n");
	}
	
	if((p==m)&&(q==n))
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
		z[i][j]=x[i][j]+y[i][j];
		}
	}
	}
		printf("\n the elemnets of array z:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		printf("%4d",z[i][j]);
		}
		printf("\n");
	}
	
		if((p==m)&&(q==n))
	{
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{	
		z[i][j]=x[i][j]-y[i][j];
		}
	}
	}
		printf("\n the elemnets of array z:\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
		printf("%4d",z[i][j]);
		}
		printf("\n");
	}
	return;
}
	