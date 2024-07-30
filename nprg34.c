#include<stdio.h>
void main(){
	int x,tot=0;
	while(1)
	{
		printf("enter no:");
		scanf("%d",&x);
		if(x==0)
			break;
		if(x<0)
			continue;
		else
		 	tot=tot+x;
			 		
	}
	printf("\nsum:%d",tot);
	return;
}