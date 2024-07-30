#include<stdio.h>
void main()
{
	int x[3][3],y[3][3],z[3][3],i,j,k;
	printf("\nArray x:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		
			scanf("%d",&x[i][j]);
		}
		printf("\nArray y:\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			
				scanf("%d",&y[i][j]);
				
			}
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					z[i][j]=0;
					for(k=0;k<3;k++)
					z[i][j]+=(x[i][k]*y[k][j]);
					
				}
			}
			printf("\noutput\n");
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				printf("%4d",x[i][j]);
				printf("\t");
				for(j=0;j<3;j++)
				printf("%4d",y[i][j]);
				printf("\t");
				for(j=0;j<3;j++)
				printf("%4d",z[i][j]);
				printf("\n");
				}
				return;
}