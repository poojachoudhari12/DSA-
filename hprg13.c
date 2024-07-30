#include<stdio.h>
void main()
{
	int n,tot=0;
	while(1)
	{
		printf("\n enter no:");
		scanf("%d",&n);
		if(n<0)
		continue;
		else
		if(n==0)
		break;
		tot=tot+n;
		
	}
	printf("sum:%d",tot);
	return;
}