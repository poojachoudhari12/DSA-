#include<stdio.h>
void main()
{
	int x,y,z;
	printf("enter no:");
	scanf("%d  %d  %d",&x,&y,&z);
	if(x>y)
	  {
	  	if(x>z)
	  	  printf("\nmax:%d",x);
	  	else
		  printf("\nmax:%d",y);  
	  }
	else
	{
		if(y>z)
			printf("\nmax:%d",y);
		else
		 	printf("\nmax:%d",z);	
	  }  
	  return;
	  
}