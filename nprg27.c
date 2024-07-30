#include<stdio.h>
void main()
{
	int no,dig,rev=0;
	printf("\nenter no:");
	scanf("%d",&no);
	while(no>0){
		dig=no%10;
		rev=rev*10+dig;
		no=no/10;
	}
	printf("\nsum:%d",rev);
	return;
}