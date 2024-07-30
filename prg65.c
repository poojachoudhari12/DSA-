#include<stdio.h>
void main()
{
	int nn=0,no,temp,dig;
	printf("\nenter no:");
	scanf("%d",&no);
	temp=no;
	while(no>0)
	{
		dig=no%10;
		nn=nn*10+dig;
		no=no/10;
	}
	if(nn==temp)
	   printf("\npalindrom");
	  else
	  printf("\nnot palindrom");
	  return; 
}