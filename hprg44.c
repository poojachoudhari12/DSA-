#include<stdio.h>
void main()
{
	int oddeven();
	if(oddeven())
		printf("\nodd no");
	else
		printf("\n odd no");
		return;
}

int oddeven()
{
	int n;
	printf("\n enter no:");
	scanf("%d",&n);
	return(n%2);
}