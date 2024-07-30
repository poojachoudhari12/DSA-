#include<stdio.h>
void main()
{
	int no,i=2;
	printf("\nenter no:");
	scanf("%d",&no);
	while(i<no)
	{
		if(no%2==0)
		break;
		i++;
		
	}
	if(i==no)
	printf("\nprime no");
	else
	printf("\nnot prime");
	return;
}