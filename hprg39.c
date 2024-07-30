#include<stdio.h>
#include<string.h>
void main()
{
	char p[5][15],q[15];
	int i=0,j,pos;
	for(i=0;i<5;i++)
	{
		printf("\n enter city name:");
		gets(p[i]);
	}
	printf("\n before sorting:");
	for(i=0;i<5;i++)
	{
		puts(p[i]);
	}
	for(i=0;i<5;i++)
	{
		pos=i;
		for(j=i+1;j<5;j++)
		{
			if(strcmp(p[i],p[pos])<0)
			pos=j;
		}
		if(i!=pos)
		{
			strcpy(q,p[pos]);
			strcpy(p[i],p[pos]);
			strcpy(p[pos],q);
		}
		
	}
		printf("\n after sorting:");
	for(i=0;i<5;i++)
	{
		puts(p[i]);
	}
	return;
}