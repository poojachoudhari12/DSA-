#include<stdio.h>
int main()
{
	int i,cnt=0,j,n;
	int data[100];
	int h[8]={0,1,1,1,1,1,1,0};
	int t[8]={0,1,1,1,1,1,1,0};
	printf("\n enetr size of data:");
	scanf("%d",&n);
	printf("\n enter data: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d",data[i]);
	}
	for(i=0;i<n;i++)
	{
	if(data[i]==1)
	{
		cnt++;
		if(data[i+1]==0)
		{
			cnt=0;
		}
		if(cnt==5)
		{
			for(j=n-1;j>i;j--)
			{
				data[j+1]=data[j];
			}
			data[i+1]=0;
			n++;
			cnt=0;
		}
	}
	
}
	for(i=0;i<8;i++)
	{
		printf("%d",h[i]);
	}
		for(i=0;i<n;i++)
	{
		printf("%d",data[i]);
	}
		for(i=0;i<8;i++)
	{
		printf("%d",t[i]);
	}
}