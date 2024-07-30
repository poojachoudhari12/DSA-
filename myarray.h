//create a header file with name myarry.h
#define M 10
#include<stdio.h>
void input(int *a)
{
	int i=0;
	while(i<M)
	{
		printf("\n data:");
		scanf("%d",(a+i));
		if(i>0)
		{
			if(a[i]<a[i-1])
			{
				printf("\ninvalide");
			}
		}
		i++;
	}
	
}
 void display(int *a)
 {
 	int i=0;
 	printf("\narray data:");
 	while(i<M)
 	{
 		printf("%4d",a[i]);
 		i++;
	 }
 }