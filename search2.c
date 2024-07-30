#include<stdio.h>
void main()
{
	int x[11],i,sv;
	i=0;
	while(i<10)
	{
		printf("\nenter the no.:");
		scanf("%d",&x[i]);
		if(i>0)
		{
			if(x[i]<x[i-1])
			{
				printf("\ninvalide input");
				continue;
			}
		}
		i++;
		}
		printf("\nenter search value:");
		scanf("%d",&sv);
		i=0;
		while(x[i]<x[10])
		{
			i++;
			}	
		if(x[i]!=x[10])
		printf("\nnot found");
		else
		printf("\nfound");
		return;
			
}