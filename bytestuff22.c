#include<stdio.h>
int main()
{
	char str[50];
	char dest[100];
	
	int j=0,i=0;
	
	printf("Enter string");
	scanf("%s",&str);
	dest[j]='@';
	j++;
	while(str[i]!='\0')
	{
		if(str[i]=='@'||str[i]=='#')
		{
			dest[j]='#';
			j++;
			dest[j]=str[i];
			i++;
			j++;
		}
		else
		{
			dest[j]=str[i];
			j++;
			i++;
		}
	}
		dest[j]='@';
 		j++;
 		dest[j]='\0';
 		printf("%s",dest);
	return 0;
}
