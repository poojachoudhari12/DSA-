#include<stdio.h>
void main()
{
	int a,b,c,max;
	printf("\nenter three no:");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(c>max)?c:max;
	printf("\nmaximum:%d",max);
	return;
	
}