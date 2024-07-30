#include<stdio.h>
void main()
{
	int length();
	printf("the digit count:%d",length());
	return;
}

int length()
{
	int no,cnt=0;
	printf("\nenter the no:");
	scanf("%d",&no);
	while(no>0)
	{
		cnt++;
		no=no/10;
	}
	return(cnt);
}