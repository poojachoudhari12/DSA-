#include<stdio.h>
union abc
{
	int a;
	char b;
	float c;
}p;
void main()
{
	union abc k;
	printf("\n int data:");
	scanf("%d",&p.a);
	printf("%4d",p.a);
	printf("\n float data:");
	scanf("%f",&p.c);
	printf("%f",p.c);
	k.b='A';
	printf("\n char :%c",k.b);
	return;
	
}