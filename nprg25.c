#include<stdio.h>
void main()
{
	int i=1,max,min,no;
	printf("enter no:");
	while(i<=10)
	{
	   scanf("%d",&no);
	 	if(i==1)
	  		 max=min=no;
		else
		{
		if(no<min)
		  min=no;
		  else
		  	if(no>max)
			  max=no;  
	    }   
	i++;
}
printf("\nmax:%d\nmin:%d",max,min);
return;
}