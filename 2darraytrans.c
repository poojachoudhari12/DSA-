#include<stdio.h>
void main()
{
	int x[3][3],i,j,temp;
	printf("\narray:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
			scanf("%d",&x[i][j]);
		}
		printf("\nmatrix befor processing:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%4d",x[i][j]);
			printf("\n");
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				temp=x[i][j];
				x[i][j]=x[j][i];
				x[j][i]=temp;
				
			}
		}
		printf("\nmatrix after processing:");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			printf("%4d",x[j][i]);
			printf("\n");
			
		}
		return;
	}
