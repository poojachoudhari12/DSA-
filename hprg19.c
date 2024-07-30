#include<stdio.h>
void main()
{
	int dig,temp,no,sum,cube;
	printf("\n enter no:");
	scanf("%d",&no);
	sum=0;
	temp=no;
		while(temp>0)
		{
			dig=temp%10;
			cube=dig*dig*dig;
			sum=sum+cube;
			temp=temp/10;
			}
			if(sum==no)	
			printf("\n arm strong:%d",no);
			else
			printf("\n not arm strong no");
				
	return;
}