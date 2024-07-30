#include<stdio.h>
void main()
{
	int no,dig,tot=0;
	printf("\nEnter three digit no:");
	scanf("%d",&no);
	dig=no%10;
	tot=(tot*10)+dig;
	no=no/10;
	dig=no%10;
	tot=(tot*10)+dig;
	no=no/10;
	dig=no%10;
	tot=(tot*10)+dig;
	no=no/10;
	printf("\nDigit sum:%d",tot);
	return;
}