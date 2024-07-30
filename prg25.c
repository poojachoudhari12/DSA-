
#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	printf("\nNo %d is %s",no,(no%5==0)?"divisible":"nondivisible");
	return;
	
}