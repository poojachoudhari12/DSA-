#include<stdio.h>
void main()
{
	int i,x,flg=1;
	printf("enter no:");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			flg=0;
			i++;
	}
	if(flg==1)
		printf("\nprime");
	else
		printf("\nnot prime");
	return;		
}