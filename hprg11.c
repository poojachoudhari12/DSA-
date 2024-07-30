#include<stdio.h>
void main()
{
	int n,tot=0,flg=1;
	while(flg==1)
	{
		printf("\n enter no:");
		scanf("%d",&n);
		if(n==0)
		flg=0;
		else
		tot=tot+n;
	}
	printf("\n the sum of no is:%d",tot);
	return;
}