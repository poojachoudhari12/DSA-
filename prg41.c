#include<stdio.h>
void main()
{
	char ch;
	printf("\nenter character:");
	scanf("%c",&ch);
	if(ch>=0 && ch<=9)
		printf("\nhexademal");
	else 
	{
		if(ch>='A'&&ch<='Z')
		     printf("\nhexaalphabet");
		    else
		    	printf("\nother");
	}
	return;
}