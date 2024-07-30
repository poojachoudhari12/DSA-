#include<stdio.h>
#include<string.h>
void main()
{
	char p[100];
	int i=0,sp=0;
	printf("\n enter string:");
	gets(p);
	while(1)
	{
		if(p[i]==32||p[i]=='\0')
		{
			printf("\n%d",sp);
			if(p[i]=='\0')
			break;
			sp=sp+1;
		}
		i++;
	}
	return;
}