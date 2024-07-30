#include<stdio.h>
void main()
{
	int no,max,min,i=1;
	printf("\nenter no:");
	scanf("%d",&no);
	while(i<=10)
	{
	   printf("\nenter no:");
	   scanf("%d",&no);		
	       if(no>max)
			max=no;
			else
			{
				if(no<min)
				min=no;
			}
			i++;
			
		}
		printf("\nmax:%d\nmin:%d",max,min);
		return;
	
	}
	
