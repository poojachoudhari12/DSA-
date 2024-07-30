#include<stdio.h>
void main()
{
	char ch;
	printf("\ntype a character:");
	scanf("%c",&ch);
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		printf("\nuppercase vowel");
	else
	{
	
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			printf("\nlowercase vowel");
		else
			printf("\nother");
    }
    return;
}