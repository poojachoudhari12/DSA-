#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	printf("%d is %s",no,(((no>0)?"positive":(no==0)?"zero":"negative")));
	return ;
	
}