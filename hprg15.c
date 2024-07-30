#include<stdio.h>
void main()
{
	int dig,n,xdig,ndig,flg=0;
	printf("enter no:");
	scanf("%d",&n);
	while(n>0)
	{
		dig=n%10;
		if(flg==0)
		{
			xdig=ndig=dig;
			flg=1;
		}
		else
		{
			if(dig>xdig)
			xdig=dig;
			else
			{
			if(dig<ndig)
			ndig=dig;
			}
		}
		n=n%10;
	}
	printf("\n min:%d\nmax:%d",ndig,xdig);
	return;
}