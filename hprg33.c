#include<stdio.h>
#include<string.h>
void main()
{
	int i=0,cnt=0;
	char p[40];
	printf("enter string:");
	gets(p);
	puts(p);
	while(1)
	{
		if(p[i]==32||p[i]=='\0')
		{
			cnt++;
			if(p[i]=='\0')
			break;
		}
		i++;
	}
	printf("\n word count:%d",cnt);
	return;
}