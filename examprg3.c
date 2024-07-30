#include<stdio.h>
void main()
{
	int i,marks[10],avg,sum=0;
	for(i=0;i<10;i++)
	{
		printf("\nenter marks:");
		scanf("%d",&marks[i]);
		sum=sum+marks[i];
	}
	printf("\nmarks:");
	for(i=0;i<10;i++)
	
		printf("%4d",marks[i]);
		avg=sum/10;
		printf("\nsum:%d\navg:%d",sum,avg);
	
	
	return;
}