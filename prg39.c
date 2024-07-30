#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\nenter no:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
		{
			if(a>c)
				printf("\nmax:%d",a);
			else
				printf("\nmax:%d",c);
					
		}
		else
			{
				if(b>c)
					printf("\nmax:%d",b);
				else
					printf("\nmax:%d",c);
			}
	return;		
}