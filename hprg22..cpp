#include<stdio.h>
int main()
{
	int x[5];
	int i,sv,cnt=0;
	printf("\nenter the elements of array:");
	for( i=0;i<=4;i++)
	{
		scanf("%d",&x[i]);

	}
	printf("\n the search value:");
	scanf("%d",&sv);
	for( i=0;i<=4;i++)
	{
		if(x[i]==sv)
		cnt++;
	}
	printf("\n the elements of array:");
	for( i=0;i<=4;i++)
	{
		printf("%4d",x[i]);
	}
	
	printf("\n the search value %d is %d times repeted",sv,cnt);
	return 0;
}
	