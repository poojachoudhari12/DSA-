#include<stdio.h>
void main()
{
	int i=1,x,cnt=0;
	printf("\nenter no:");
	scanf("%d",&x);
	while(i<=x)
	{
	  if(x%i==0);
	  cnt++;
	  i++;	
	}
	printf("\nno %d is divisible %d time ",x,cnt);
	return;
	
}
