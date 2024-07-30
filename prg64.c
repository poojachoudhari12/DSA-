#include<stdio.h>
void main()
{
	int no,tot=0,dig;
	printf("\nenter no:");
	scanf("%d",&no);
	while(no>0)
	{
		dig=no%10;
		tot=(tot*10)+dig;
		no/=10;
	}
	printf("\nreverse no:%d",tot);
	return;
}