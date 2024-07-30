#include<stdio.h>
void main()
{
	int x[5],i,j,tmp,flg;
	printf("\nenter array data:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&x[i]);
	}
	printf("\nbefore sorting");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	for(i=0;i<4;i++)
	{
		flg=0;
		for(j=0;j<4-i;j++)
		{
			if(x[j]>x[j+1])
			{
				flg=1;
				tmp=x[j];
				x[j]=x[j+1];
				x[j+1]=tmp;
			}
		}
		if(flg==0)
		break;
	}
		printf("\nafter sorting");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
	return 0;
}