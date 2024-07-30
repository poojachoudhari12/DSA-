#include<stdio.h>
void main()
{
	int x,psum=0,nsum=0,flg=1;
	while(flg==1)
	{
		printf("\nno:");
		scanf("%d",&x);
		if(x==0)
		flg=0;
		else
		{
			if(x>0)
			psum=psum+x;
			else
	         nsum=nsum+x;
		}
		
	}
	printf("\npsum:%d\nnsum:%d",psum,nsum);
	return;
}