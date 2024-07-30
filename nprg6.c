#include<stdio.h>
void main()
{
	int no,dig,sum=0;
	printf("enter no:");
	scanf("%d",&no);
	dig=no%10;
	sum=sum+dig;
	no=no/10;
	dig=no%10;
	sum=sum+dig;
	no=no%10;
	dig=no%10;
	sum=sum+dig;
	no=no/10;
	printf("\nsum:%d",sum);
	return;
}