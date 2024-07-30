#include<stdio.h>
void main()
{
	int no,tot=0,dig;
	printf("\nenter no:");
	scanf("%d",&no);
    while(no>0)
	{	
		dig=no%10;
		tot+=dig;
		no/=10;
		
	}
	printf("\ntotal:%d",tot);
	return;
	
	
}