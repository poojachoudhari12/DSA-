//dft using  adj matrix
#include<stdio.h>

int adj[10][10];
int i,n,j;
int visited[10];

void createMatrix()
{
	while(1)
	{
		printf("\nsource:");
		scanf("%d",&i);
		printf("\ndestination:");
		scanf("%d",&j);
		if(i==0&&j==0)
		break;
		if(i<1||i>n||j<1||j>n)
		continue;
		adj[i][j]=adj[j][i]=1;
		
	}
}
void dft(int v)
{
	printf("%4d",v);
	visited[v]=1;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0&&adj[v][i]==1)
		dft(i);	
		}	
}
void main()
{
	printf("\nenter vertice cnt:");
	scanf("%d",&n);
	createMatrix();
	dft(1);
	return;
}