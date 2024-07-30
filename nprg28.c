#include<stdio.h>
void main()
{
	int i=1,a,b,c;
	a=-1;
	b=1;
	printf("\nfibo sereis");
	while(i<=10)
	{
		c=a+b;
		printf("%d\n",c);
		a=b;b=c;
		i++;
		
	}
	return;
}