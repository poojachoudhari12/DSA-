#include<stdio.h>
void main()
{
	int x,psum=0,nsum=0,flg=1;
	while(flg==1)
	{
		printf("enter no:");
		scanf("%d",&x);
		if(x==0)
			flg=0;
		if(x>0)
			psum+=x;
		else
			nsum+=x;
					
	}
	printf("\nsum of positive:%d\nsum of nsum:%d",psum,nsum);
	return;
}