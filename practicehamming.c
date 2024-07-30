#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int c[100],d[100],cd,p,m,i,pc=0;
	printf("\nenter the size of data:");
	scanf("%d",&m);
	int pa=0;
	for(pa=0;pow(2,pa)<m+pa+1;pa++)
	{
		pc=pc+1;
	}
	printf("\nenter data:");
	for(i=0;i<m;i++)
	{
		scanf("%d",&d[i]);
	}
	printf("\n data:");
	for(i=0;i<m;i++)
	{
		printf("%d",d[i]);
	}
	printf("\nparity bits of data are %d",pc);
	printf("\nparity:");
	printf("\n1.even\n2.odd\nenter:");
	scanf("%d",&p);
	printf("\ncodeword:");
	if(p==1)
	{
		for(i=0;i<9;i++)
		{
			if(i==0||i==2||i==3||i==4||i==6)
			{
				c[0]=d[0];
				c[2]=d[1];
				c[3]=d[2];
				c[4]=d[3];
				c[6]=d[4];
			}
			else
			{
				c[8]=(c[6]^c[4]^c[2]^c[0]);
				c[7]=(c[6]^c[3]^c[2]);
				c[5]=(c[4]^c[3]^c[2]);
				c[1]=(c[0]);
			}
		}
	}
	else if(p==2)
	{
		for(i=0;i<9;i++)
		{
			if(i==0||i==2||i==3||i==4||i==6)
			{
				c[0]=d[0];
				c[2]=d[1];
				c[3]=d[2];
				c[4]=d[3];
				c[6]=d[4];
			}
			else
			{
				c[8]=!(c[6]^c[4]^c[2]^c[0]);
				c[7]=!(c[6]^c[3]^c[2]);
				c[5]=!(c[4]^c[3]^c[2]);
				c[1]=!(c[0]);
			}
		}
	}
	else
	{
		printf("\ninvalide");
		
	 }
	  for(i=0;i<9;i++)
	  {
	  	printf("%d",c[i]);
	  }
}