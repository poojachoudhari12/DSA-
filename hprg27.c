#include<stdio.h>
void main()
{
	int x[6]={1,2,3,4,5,6};
	int y[6];
	int i;
	for(i=0;i<5;i++)
	{
		y[i]=y[5-i];
	}
	for(i=0;i<5;i++)
	{
		printf("%d",y[i]);
	}
	return;
	
}