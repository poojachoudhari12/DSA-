#include<stdio.h>
void main()
{
	int x;
	printf("enter no:");
	scanf("%d",&x);
	if(x>=0 && x<=100)
	 	printf("\nwithin range");
	 	else
	 		printf("\nout of range");
	return; 			
	
}