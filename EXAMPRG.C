#include<stdio.h>
int main()
{
	int a[50],n,i,large,small;
	printf("\nenter number of elements:");
	scanf("%d",&n);
	printf("\ninput array data:");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=small=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>large)
		large=a[i];
		if(a[i]<small)
		small=a[i];
		
	}
     printf("\nthe smallest value is:%d\n",small);
     printf("\nthe largest value is:%d\n",large);
     return 0;
 }
				
	
