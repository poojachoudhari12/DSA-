#include<stdio.h>
void main()
{
	int n;
	printf("enter no of lines:");
	scanf("%d",&n);
	int nsp=n-1;
	int nst=1;
	for(int i=1;i<=n;i++)
	{
		for(int k=1;k<=nsp;k++)
		{
			printf(" ");
		}
		nsp=nsp-1;
		for(int j=1;j<=nst;j++)
		{
			printf("%d",j);
		}
		nst=nst+2;
		printf("\n");
		
	}
	return;
}