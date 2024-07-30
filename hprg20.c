#include<stdio.h>
void main()
{
	int x[5];
	int i,j,temp;
	printf("\nenter the elements of array:");
	for( i=0;i<=4;i++)
	{
		scanf("%d",&x[i]);
	}
		printf("\n the elements of array:");
	for( i=0;i<=4;i++)
	{
		printf("%4d",x[i]);
	}
	
	for(i=0,j=4;i<j;j--,i++)
	{
		temp=x[i];
		x[i]=x[j];
		x[j]=temp;
	}
	printf("\n the elements of array after process:");
	{
		printf("%4d",x[i]);
	}
	return;
	
}