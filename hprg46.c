#include<stdio.h>
void main()
{
	int digitsum();
	printf("the sum of digit is:%d",digitsum());
	return;
}

int digitsum()
{
	int dig,no,sum=0;
	printf("\n enter no:");
	scanf("%d",&no);
	while(no>0)
	{
		dig=no%10;
		sum=sum+dig;
		no=no/10;
	}
	return(sum);
}