#include<stdio.h>
#include<string.h>
int main()
{
	int i=0,j=0;
	char d[100],m[100];
	printf("\nfLAG='@'");
	printf("\nescape char:'#'");
	printf("\nenter data:");
	scanf("%s",m);
	d[j]='@';
	j++;
	while(m[i]!='\0')
	{
		if(m[i]=='@'||m[i]=='#')
		{
			d[j]='#';
			j++;
			d[j]=m[i];
			i++;
			j++;
			
		}
		else
		{
			d[j]=m[i];
			j++;
			i++;
		}
	}
	d[j]='@';
	puts(d);
}