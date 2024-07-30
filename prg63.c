#include<stdio.h>
void main()
{
	int no,cnt=0;
	printf("\nenter no:");
	scanf("%d",&no);
	while(no>0)
	{
		cnt++;
		no/=10;
		
	}
	printf("\ndigit count:%d",cnt);
	return;
}