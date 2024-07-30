#include<stdio.h>;
void main() {
	char ch;
	int no;
	printf("\ntype acharacter:");
	scanf("%c",&ch);
	printf("\nenter no:");
	scanf("%d",&no);
	printf("\n%d",(ch>='A')&&(ch<='Z'));
	printf("\n%d",(ch>='97')&&(ch<='z'));
	printf("\n%d",(ch=='e')||(ch=='E'));
	printf("\n%d",(ch>=0)&&(ch<=9));
	printf("\n%d",(no>=0)&&(no<=100));
	printf("\n%d",!((no>=0)&&(no<=100)));
	printf("\n%d",(no<0||no>100));
	printf("\n%d",(no%5==0||no%7==0));
	printf("\n%d",no!=0);
	printf("\n%d",no%2==0);
	return;
	
}