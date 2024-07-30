#include<stdio.h>
void main()
{
	int n;
	int pcnt=0,ncnt=0,flg=1;
	while(flg==1)
	{
		printf("\n enter no:");
		scanf("%d",&n);
		if(n==0)
			flg=0;
		else
		{
			if(n>0)
			pcnt=pcnt+n;
			else
			ncnt=ncnt+n;
		}
	}
	printf("\n the sum positive no:%d",pcnt);
	printf("\n the sum negetive no:%d",ncnt);
	return;
}