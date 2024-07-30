#include<stdio.h>
#include<string.h>
void main()
{
	char p[5][50],q[15];
	int i=0;
	while(i<5)
	{
		printf("\n enter city name :");
		gets(p);
		i++;
	}
	printf("\n enter search city name:");
	gets(q);
	for(i=0;i<5;i++)
	{
		if(strcmp(p[i],q)==0)
		break;
	}
	if(i==5)
	printf("\n not found");
	else
	printf("\n found");
	return;
}