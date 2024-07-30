#include<stdio.h>
void main()
{
	int x[5];
	int i=0;
	printf("\ndata");
	while(i<5){
		scanf("%d",&x[i]);
		i++;
	}
	printf("\ndata");
	for(i=0;i<5;i++)
	{
		printf("%4d",x[i]);
	}
return;
}