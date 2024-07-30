#include<stdio.h>
void main()
{
	int i=1,x,osum=0,esum=0;
	while(i<=10)
	{
		printf("\nenter no:");
		scanf("%d",&x);
		if(x%2==0)
		  esum=esum+x;
		 else
          osum=osum+x;
          i++;
	}
	printf("\nesum:%d\nosum:%d",esum,osum);
	return;
}