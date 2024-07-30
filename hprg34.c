#include<stdio.h>
#include<string.h>
void main()
{
	char p[40];
	int i=0;
	printf("enter string:");
	scanf("%s",p);
	while(p[i]!='\0')
	{
		if(p[i]==0||p[i]==1)
		i++;
		else
		break;
	}
	if(p[i]=='\0')
	printf("\n binary string");
	else
	printf("\n not binary string");
	return;
}