#include<stdio.h>
void main()
{
	int no;
	printf("\nenter no:");
	scanf("%d",&no);
	if(no>0)
		printf("postive");
	else
	{
		if(no<0)
			printf("negative");
		else
		 	printf("zeero");
			 	
		
		}	
		return;
}