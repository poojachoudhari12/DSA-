#include<stdio.h>
void main()
{
	int no,above=0,below=0,within=0,i=1;
	while(i<=10)
	{
		printf("\nenter no:");
		scanf("%d",&no);
		if(no<0)
		  below++;
		else
		{
			if(no>100)
			above++;
			else
			    within++;
		}
		i++;
		 
	}
	printf("\nbelow 0:%d\nabove 100:%d\nwithin 0-100:%d",below,above,within);
	return;
}