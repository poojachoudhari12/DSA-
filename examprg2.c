#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{ 
		printf("\nenter value for array:");
		scanf("%d",&a[i][j]);
	 }
	 printf("\narray elements:");
	 for(i=0;i<3;i++)
	 {
	 	printf("\n");
	 	for(j=0;j<3;j++)
	 	printf("%d\t",a[i][j]);
	 	
	 }
	 printf("\nthe left diagonal elements:");
	 for(i=0;i<3;i++)
	 for(j=0;j<3;j++)
	 {
	 	if(i==j)
	 	printf("%d\t",a[i][j]);
	 }
	 return;
}