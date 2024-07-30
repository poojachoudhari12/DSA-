#include<stdio.h>
void main()
{
	int no,dig;
	printf("enter no:");
	scanf("%d",&no);
	while(no>0)
	{
		dig=no%10;
		if(dig>1)
		break;
		else
		no=no/10;
	}
	if(no==0)
	printf("\nbinary no");
	else
	printf("\nnot binary no");
	return;
}