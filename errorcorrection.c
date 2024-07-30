#include<stdio.h>
#include<math.h>
int main()
{
	int i,j;
	int farr[11];
	int c[4];
	j=0;
	printf("enter the codewords received\n");
	for(i=0;i<11;i++)
	{
		scanf("%d",&farr[i]);
	}
	for(i=0;i<11;i++)
	{
		if (i==0||i==1||i==3||i==7)
		{
			c[j]=farr[i];
			j++;
		}
	}
	printf("the redundant bits are\n");
	for(i=0;i<4;i++)
	{
		printf("%d",c[i]);
	}
	int dec=0;
	for(i=0;i<4;i++)
	{
		dec+=(c[i]* pow(2,i));
		printf("\n%d index has wrong bit",(dec-1));
	}
	for(i=0;i<11;i++)
	{
		if(i==dec-1)
		{
			if(farr[i]==0)
			{
				farr[i]=1;
			}
			else
			{
				farr[i]=0;
			}
		}
	}
	printf("\nafter correction of codeword is\n");
	for(i=0;i<11;i++)
	{
		printf("%d",farr[i]);
	}
	return 0;
}
