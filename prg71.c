#include<stdio.h>
void main()
{
	int x,i,flg=1;
	printf("\nno:");
	scanf("%d",&x);
	for(i=2;i<x;i++)
	{
	if(x%i==0)
	flg=0;
}
if(flg=1)
printf("\nprime");
else
printf("\nnot prime");
}