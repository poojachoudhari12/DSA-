#include<stdio.h>
int main()
{
	int arr[10]={9,6,3,8,5,2,7,4,1,0};
	int small=arr[0],large=arr[0],i;
	for(i=0;i<10;i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	printf("\nlarge:%d",large);
	for(i=0;i<10;i++)
	{
		if(small>arr[i]);
		small=arr[i];
	}
	printf("\nsmall:%d",small);
}