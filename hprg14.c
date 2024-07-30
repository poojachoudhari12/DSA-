#include<stdio.h>
void main()
{
	int i=2,n;
	printf("\nenter no:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		break;
		i++;
	}
	if(i==n)
	printf("\nprime:%d",n);
	return;
}