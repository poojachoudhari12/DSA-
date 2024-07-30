#include<stdio.h>
void main()
{
	int i=2,x,cnt=2;
	printf("enter no:");
	scanf("%d",&x);
	while(i<x)
	{
		if(x%i==0)
		cnt++;
		i++;
		
	}
	if(cnt==2)
		printf("\nprime no");
	else
		printf("\nnot prime");	
	return;		
}