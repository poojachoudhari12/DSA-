#include<stdio.h>
void main()
{
	int rem,dno;
	long int bno=0,mf=1;
	printf("enter decimal no:");
	scanf("%d",&dno);
	while(dno>0)
	{
		rem=dno%2;
		bno=bno+(mf*rem);
		mf=mf*10;
		dno=dno/2;
	}
	printf("\nobtioned binary no is:%ld",bno);
	return;
}