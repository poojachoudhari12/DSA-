#include<stdio.h>
void main()
{
	int x,tot=0,flg=1;
	while(flg==1)
	{
		printf("\nno:");
		scanf("%d",&x);
		if(x==0)
		  flg=0;
		else
		   tot=tot+x;
		    
	}
	printf("\ntotal:%d",tot);
	return;
}