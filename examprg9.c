#include<stdio.h>
void main()
{
	int fact=1,i,number;
	printf("enter number:");
	scanf("%d",&number);
	for(i=0;i<=number;i++)
	{
		fact=fact*i;
	}
	printf("factorial of %d is:%d",number,fact);
	
	
}