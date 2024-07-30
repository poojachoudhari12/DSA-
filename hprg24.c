#include<stdio.h>
void main()
{
	int x[5];
	int i,pos,temp,j;
	printf("enter the elements of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nthe elements of array before process:");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	for(i=0;i<5;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(x[j]>x[pos])
				pos=j;
		}
		if(i!=pos)
			{
				temp=x[i];
				x[i]=x[pos];
				x[pos]=temp;
			}
	}
		printf("\nthe elements of array after process:");
		for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	return;
	
}