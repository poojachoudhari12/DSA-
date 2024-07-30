//insertion sort
#include<stdio.h>
void main()
{
	int x[5],i,val,j;
	for(i=0;i<5;i++)
	{
		printf("\nenter no:");
		scanf("%d",&val);
		for(j=i-1;j>=0;j--)
		{
			if(val<x[j])
			x[j+1]=x[j];
			else
			break;
		}
		x[j+1]=val;
		
	}
	printf("\n data\n");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	return;
}