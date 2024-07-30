#include<stdio.h>
void main()
{
	int dig,xdig=0,ndig=9,x;
	printf("enter no:");
	scanf("%d",&x);
	while(x>0)
	{
		dig=x%10;
		if(dig>xdig)
			xdig=dig;
		else
		{
			if(dig<ndig)
			ndig=dig;
			}	
			x/=10;
			
	}
	printf("\nmax:%d\nmin:%d",xdig,ndig);
	return;
	
}