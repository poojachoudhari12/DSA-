#include<stdio.h>
void main()
{
	int no,dig,sum=0;
	printf("enter no:");
	scanf("%d",&no);
	dig=no%10;
	sum=(sum*10)+dig;
	no=no/10;
  	dig=no%10;
  	sum=(sum*10)+dig;
  	no=no/10;
  	dig=no%10;
  	sum=(sum*10)+dig;
  	no=no/10;
  	printf("reverse no:%d",sum);
  	return;
	
}