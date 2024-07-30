#include<stdio.h>
void main()
{
	int mno;
	printf("enter mno:");
	scanf("%d",&mno);
	if(mno<1 && mno>12)
		printf("\ninvalide mno");
	if(mno==2)
	    printf("\n28 days");
	else
	{
		if(mno==1||mno==3||mno==5||mno==7||mno==8||mno==10||mno==12)
		 	printf("\n 31days");
		else
			printf("\n 30days");
			 	
			}
	return;				
	}