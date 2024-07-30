#include<stdio.h>
void main()
{
	int x[5],i,sum=0,avg=0;
	i=0;
	printf("enter no:");
	while(i<5)
	{
		scanf("%d",&x[i]);
		i++;
		sum=sum+x[i];
	}
	printf("\ndata\n");
	for(i=0;i<5;i++)
	printf("%4d",&x[i]);
	avg=sum/5;
	printf("\nsum:%d\navg:%d",sum,avg);
	return;
}