#include<stdio.h>
#include<limits.h>
int main()
{
	int x[7]={1,-7,-8,6,2,0,-12};
	int max=INT_MIN;
	int smax=INT_MIN;
	for(int i=0;i<7;i++)
	{
		if(max<x[i])
		 max=x[i];
	}
	for(int i=0;i<7;i++)
	{
		if(x[i]!=max&&x[i]>smax)
		smax=x[i];
	}
	printf("\n max=%d\nsmax:%d",max,smax);
	return;
}