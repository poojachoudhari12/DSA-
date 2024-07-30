#include<stdio.h>
void main()
{
	int x,max=0,i=1;
	while(i<=5)
	{
	
		printf("\nenter no:");
		scanf("%d",&x);
		
		
		if(x>max)
		max=x;
		i++;
		
	}
	printf("\nmax:%d",max);
	return;
}