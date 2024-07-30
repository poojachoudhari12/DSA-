#include<stdio.h>
void main()
{
	int x[5]={8,7,5,6,4};
	int i,j,k;
	int totaltriplet=0;
	int y=15;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			for(k=j+1;j<5;j++)
			{
				if(x[i]+x[j]+x[k]==y)
				totaltriplet++;
				
			}
		}
	}
	printf("the no of triplet are:%d ",totaltriplet);
	return;
}