#include<stdio.h>
void main()
{
	void table();
	table();
	return;
}

void table()
{
	int i=1,n;
	printf("\n enter number whose table you want find:");
	scanf("%d",&n);
	while(i<=10)
	{
		printf("\n%d ",i*n);
		i++;
	}
	return;
}