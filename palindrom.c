#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int ispalindrome(char[]);
	int res;
	printf("\nenter string:");
	gets(a);
	res=ispalindrome(a);
	if(res==0)
	printf("\nnot");
	printf("\npalindrome");
	return;
}
int ispalindrome(char k[])
{
	int i=0;
	int j=strlen(k)-1;
	while(i<j)
	{
		if(k[i]!=k[j])
		break;
		i++;
		j--;
	}
	return(i>=j);
	}
	

	
