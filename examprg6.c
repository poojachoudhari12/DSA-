#include<stdio.h>
int main()
{
	int i,j,n,a[100];
	printf("enter size of no:");
	scanf("%d",&n);
	printf("enter elemets");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(int i=0;i<n;i++);
	{
		for(int j=0;j<n;j++)
		{
			if(a[j]>a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("\nascending");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
		
	}
	for(int i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]<a[i])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
	 }
	}
	printf("\n\ndescreasing:");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	
}