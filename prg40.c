#include<stdio.h>
void main()
{
	int mno;
	printf("\nenter mno:");
	scanf("%d",&mno);
	if(mno>=1||mno<=12)
	{
	   printf("invalide value");
	   return;
    }
	  if(mno==2){
	  	printf("\n28 days");
	  }else{
	  
	  	{
	  		if(mno==4||mno==6||mno==9||mno==11)
	  			printf("\n30 days");
	  		else
			  printf("\n31 days");	
		  }
	  }		
return;  
}