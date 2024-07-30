#include<stdio.h>
void main()
{
	int i=1,x,total=0;
	while(i<=10){
		printf("\nenter no:");
		scanf("%d",&x);
		total=total+x;
		i++;
	}
	printf("\ntotal:%d",total);
	return;
}