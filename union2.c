#include<stdio.h>
union abc
{
	int a;
	char b;
	float c;
};
struct pqr
{
	char type;
	union abc k; 
}p[5];
void main()
{
	int i=0,opt;
	while(i<5)
	{
		printf("\n type\ni-int \nc-char \nf-float \nchoice:");
		scanf(" %c",&p[i].type);
		switch(p[i].type)
		{
			case 'i':
				printf("\n int data:");
				scanf("%d",&p[i].k.a);
				break;
			case 'c':
				printf("\n char :");
				scanf("%c",&p[i].k.b);
				break;
			case 'f':
				printf("\n float:");
				scanf("%f",&p[i].k.c);
				break;
					
		}
		i++;
	}
	printf("-------------- o/p-----------------------");
	for(i=0;i<5;i++)
	{
		switch(p[i].type)
		{
			case 'i':
				printf("\n int:%d",p[i].k.a);
			case 'c':
				printf("\n char:%c",p[i].k.b);
			case 'f':
				printf("\n float:%f",p[i].k.c);
						
		}
	}
}