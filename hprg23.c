#include<stdio.h>
void main()
{
	int x[10];
	int i,xpos=0,npos=0,max,min;
	printf("\n enter the elements of array:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
		if(i==0)
		max=min=x[i];
		if(x[i]>max)
		{
			max=x[i];
			xpos=i;
		}
		else
		{
			if(x[i]<min)
			{
				min=x[i];
				npos=i;
			}
		}
	}
	printf("\n the elements of array:");
	for(i=0;i<10;i++)
	{
		printf("%4d",x[i]);
	}
	printf("\n the max element %d position is:%d\nthe min element %d position is:%d",max,xpos,min,npos);
	return;
	
}