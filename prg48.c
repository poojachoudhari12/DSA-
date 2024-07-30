#include<stdio.h>
void main()
{
	int i=1,x,ocnt=0,ecnt=0;
	while(i<=10)
	{
		printf("\nenter no:");
		scanf("%d",&x);
		if(x%2==0)
			ecnt++;
		else
			ocnt++;
		i++;	
	}
	printf("\neven:%d\nodd:%d",ecnt,ocnt);
	return;
	
}