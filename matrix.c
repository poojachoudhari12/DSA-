#include<stdio.h>
void add();
void sub();
void mul();
void trans();
int main() 
{
  int ch;
  printf("\n1)transpose");
  printf("\n2)addition of two matrix");
  printf("\n3)subtraction of two matrix");
  printf("\n4)multiplication of two matrix");
  scanf("%d",&ch);
  
  switch(ch)
  {
  	case 1:trans();
  	break;
  	case 2:add();
  	break;
  	case3:sub();
  	break;
  	case 4:mul();
  	break;
  	default:printf("\nwrong choice");
  	}
}
void trans()
{
	int a[3][3],i,j;
	printf("\nenter matrix a:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[j][i]);
		}printf("\n");
		
	}
	printf("\nthe transpose of matrix a is:");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}

void add()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nenter matrix a:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nenter matrix b:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
		
	}
	printf("\n matrix after addition");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  c[i][j]=a[i][j]+b[i][j];
		  printf("%d\t",c[i][j]);
		  }
		  printf("\n");
	}
}
void sub()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("\nenter matrix a:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nenter matrix b:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
		
	}
	printf("\n matrix after subtraction");
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  c[i][j]=a[i][j]-b[i][j];
		  printf("%d\t",c[i][j]);
		  }
		  printf("\n");
	}
}
void mul()
{
	int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("\nenter elements of first matrix: ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nenter elements of second matrix :");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
			
		}
		printf("\n");
		
	}
	printf("\n multiplication of two matrix :");
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		  c[i][j]=0;
		  for(k=0;k<3;k++)
		  {
		  	c[i][j]=c[i][j]+a[i][k]*b[k][j];
		  }
		  printf("%d\t",c[i][j]);
		  }
		  printf("\n");
	}
}


