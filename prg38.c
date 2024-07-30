#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	if(no>0)
		printf("\npositive");
	else
		if(no<0)
			printf("\nnegative");
		else
			printf("\nzero");
	return;
					
}