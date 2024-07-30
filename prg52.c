#include<stdio.h>
void main()
{
	int no,i=1,max=0;
	printf("\nenter number\n");
	while(i<=5)
     {
     	scanf("%d",&no);
        if(no>max)
	     max=no;
	     i++;
     }
    printf("\nmax:%d",max);
    return;
				
}