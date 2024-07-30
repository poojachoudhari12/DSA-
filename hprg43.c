#include<stdio.h>
void main()
{
	void length();
	length();
	return;
}

void length()
{
	int n,cnt=0;
	printf("\n enter  no to find length :");
	scanf("%d",&n);
	while(n>0)
	{
		cnt++;
		n=n/10;
	}
	printf("\n the length of digit:%d",cnt);
	return;
}
