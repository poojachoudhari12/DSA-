#include<stdio.h>
void main()
{
	int no;
	printf("enter no:");
	scanf("%d",&no);
	printf("no:%d is %s",((no>0)?"nonzero":"zero"));
	return;
	
}