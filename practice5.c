#include<stdio.h>
int main()
{
	int y;
	printf("enter year:");
	scanf("%d",&y);
	if((y%4==0&&y%100!=0)||y%400==0)
	{
	   printf("year is leap");
	   
	}
	else
	printf("year is not leap");
	return 0;
}