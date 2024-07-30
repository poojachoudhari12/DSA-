#include<stdio.h>
void main()
{
	
	int arr[10]={9,8,6,5,3,2,7,4,1,0};
	int small=arr[0],large=arr[0],i;
	for(i=0;i<10;i++)
	{
		if(large<arr[i])
		large=arr[i];
	}
	printf("\n large:%d",large);
	for(i=0;i<10;i++)
	{
		if(small>arr[i])
		small=arr[i];
		
	}
	printf("\n small:%d",small);
}
