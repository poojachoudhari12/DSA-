//bft using adj matrix
#include<stdio.h>
int adj[10][10];
int i,n,j;
int visited[10];
int q[10],f=0,r=-1;

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
void bft(int v)
{
	visited[v]=1;
	printf("%4d",v);
	q[++r]=v;
	while(f<=r)
	{
		v=q[f++];
		for(i=1;i<=n;i++)
		{
			if(visited[i]==0&&adj[v][i]==1)
			{
			q[++r]=i;
			visited[i]=1;
			printf("%4d",i);
				
			}
		}
	}
	
}

void main()
{
	printf("\nvertices cnt:");
	scanf("%d",&n);
	createMatrix();
	bft(1);
	return;
}