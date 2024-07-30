#include<stdio.h>
int main()
{

	int n;
	int a[8];
	int b[8]={0,1,1,1,1,1,1,0};
	int f[24];
	
	printf("Enter the inputs:");
	
    for(int i=0;i<8;i++)
		{
			scanf("%d",&a[i]);	
		}

	for(int i=0;i<8;i++)
	{
		f[i]=b[i];
	}
	
	for(int i=8,j=0;i<16,j<8;i++,j++)
	{	
		f[i]=a[j];	
	}
	
	for(int i=16,j=0;i<24,j<8;i++,j++)
	
#include<stdio.h>
int main()
{
	int n;
	int a[8];
	int b[8]={0,1,1,1,1,1,1,0};
	int f[24];
	
	printf("Enter the inputs:");
	
    for(int i=0;i<8;i++)
		{
			scanf("%d",&a[i]);	
		}

	for(int i=0;i<8;i++)
	{
		f[i]=b[i];
	}
	
	for(int i=8,j=0;i<16,j<8;i++,j++)
	{	
		f[i]=a[j];	
	}
	
	for(int i=16,j=0;i<24,j<8;i++,j++)
	{
		f[i]=b[j];
	}
			for(int i=0;i<24;i++)
			{
				printf("%d",f[i]);
			}
}
	{
		f[i]=b[j];
	}
			for(int i=0;i<24;i++)
			{
				printf("%d",f[i]);
			}
}
