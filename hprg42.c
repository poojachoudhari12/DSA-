#include<stdio.h>
void main()
{
	void factorial();
	factorial();
	return;
}

void factorial()
{
	int n,i=1,fact=1;
	printf("\n enter no to find factorial:");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("the factorial of %d is %d",n,fact);
	return;
}