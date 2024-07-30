#include<stdio.h>
void main()
{
	int x,i=2;
	printf("\nenter no");
	scanf("%d",&x);
	while(i<=x)
	{
		if(x%i==0)
		break;
		i++;
		
	}
	if(i==x)
	printf("\nprime");
	else
	printf("\nnot prime");
	return;
	
}