#include<stdio.h>
void main()
{
	int no;
	printf("\nenter no:");
	scanf("%d",&no);
	if(no%5==0)
	{
		if(no%7==0)
			printf("\ndivisible by 5&7");
		else
			printf("\ndivisible by 5");
	}
	else
		printf("\nnot divisioble by 5&7");
    return;	
}
