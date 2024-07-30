#include<stdio.h>
void main()
{
	int i=2,x,cnt=0;
	printf("enter no:");
	scanf("%d",&x);
	while(i<=x/2)
	{
		if(x%i==0)
		cnt++;
		
		i++;
		
	}
	printf("\ncnt of div:%d",cnt);
	return;
	
}