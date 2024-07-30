#include<stdio.h>
void main()
{
	long int nn=0;
	int n,dig,sdig,temp;
	printf("enter no:");
	scanf("%d",&n);
	for(sdig=0;sdig<=9;sdig++)
	{
		temp=n;
		while(temp>0)
		{
			dig=n%10;
			if(dig==sdig)
			nn=nn*10+dig;
			temp=temp/10;
			
		}
	
	}
		printf("\nmax:%ld",nn);
		return;
}