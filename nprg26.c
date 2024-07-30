#include<stdio.h>
void main()
{
	int i=1,no,within=0,below=0,above=0;
	printf("enter no:");
	while(i<=5)
	{
		scanf("%d",&no);
		if(no>=0&&no<=100)
			within++;
		else
		{
			if(no>100)
			  above++;
			else
			  below++;  
		}
		i++;	
			
	}
	printf("\nwithin:%d\nabove:%d\nbelow:%d",within,above,below);
	return;
}