#include<stdio.h>
#include<string.h>
void main()
{
	char p[100];
	char *q;
	int n,i;
	printf("\nenter string:");
	gets(p);
	n=strlen(p)+1;
	q=(char*)malloc(n*sizeof(char));
	while(1)
	{
		*(q+i)=*(p+i);
		if(*(p+i)=='\0')
		break;
		i++;
	}
	puts(p);
	puts(q);
	free(q);
	return;
}