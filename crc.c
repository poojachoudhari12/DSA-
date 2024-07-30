#include<stdio.h>
#include<math.h>
int main()
{
int c[11];
int i;
printf("enter 11 bit input");
for(i=0;i<12;i++)
{
	scanf("%d",&c[i]);
}
int a[4];
a[0]=c[0]^c[2]^c[4]^c[8]^c[10];
a[1]=c[1]^c[2]^c[5]^c[6]^c[10];
a[2]=c[3]^c[4]^c[5]^c[6];
a[3]=c[7]^c[8]^c[9]^c[10];
printf("\nredudent bits");
for(i=0;i<4;i++)
{
	printf("%d",a[i]);
}
int dec=0;
for(i=0;i<4;i++)
{
	dec=dec+(a[i]*pow(2,i));
}
printf("%d th index is wrong\n",dec-1);
for(i=0;i<11;i++)
{
	if(i==dec-1)
	{
		if(c[i]==0)
		{
			c[i]=1;
		}
		else
		{
			c[i]=0;
		}
	}
}
	printf("corrected bits");
	for(i=0;i<11;i++)
	{
		printf("%d",c[i]);
	}
}
