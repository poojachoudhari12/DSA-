#include<stdio.h>
void main()
{
	char ch;
	printf("\ntype character:");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
		printf("\nuppercase");
	else{
		if(ch>='a'&&ch<='z')
			printf("\nlowercase");
		else
		{
			if(ch>=48&&ch<=57)
				printf("\ndigit character");
			else
				printf("\nother");
	    }
	}
	return;	
}