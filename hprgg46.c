#include<stdio.h>
void main()
{
	int isprimesuper();
	switch(isprimesuper())
	{
		case 0:
			printf("\n not prime");
			break;
		case 1:
			printf("\n prime");
			break;
		case 2:
			printf("\n super prime");
			break;		
	}
	return;
}

int isprimesuper()
{
	int n,i=2,dig;
	printf("\n enter no:");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		break;
		i++;
	}
	if(i!=n)
		return 0;
	while(n>0)
	{
		dig=(n%10);
		if(n==3||n==2||n==5||n==7)
		n/=10;
		else
		break;
		}	
		return(n=0)?2:1;
		
		
	
}