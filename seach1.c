#include<stdio.h>
void main()
{
	int x[10],i,sv,j,temp;
	i=0;
	while(i<10)
	{
		printf("\nenter no:");
		scanf("%d",&x[i]);
		i++;
	}
	while(1)
	{
		printf("\nenter the search value:");
		scanf("%d",&sv);
		if(sv==0)
		break;
		i=0;
		while(i<10)
		{
			if(x[i]==sv)
			break;
			i++;
		}
		if(i==10)
		printf("\nnot found");
		else
		{
			printf("\nfound");
			j=i-1;
			if(j>=0)
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			
			}
		}
	}
}