#include<stdio.h>
void main()
{
	int rem,dno;
	long int bno=0,mf=1;
	printf("enter no:");
	scanf("%d",&dno);
	while(dno>0)
	{
		rem=dno%2;
		bno=bno+(mf*rem);
		mf=mf*10;
		dno=dno/2;
		
	}
	printf("\n binay no:%d",bno);
	return;
}