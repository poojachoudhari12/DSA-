#include<stdio.h>
#include<conio.h>
int adj[10][10],n,i=0,j=0,f=0,r=-1;
int visited[10],q[10];
void createGraph()
{
    while(1)
    {
	printf("\n Source Destination:");
	scanf("%d %d",&i,&j);
	if(i==0 && j==0)
	   break;
	if(i<1||j<1||i>n||j>n)
	   continue;
	adj[i][j]=adj[j][i]=1;
    }
}
void insert(int v)
{
	r++;
	q[r]=v;
}
int remqueue()
{
	return q[f++];
}
int isempty()
{
	return(r<f);
}
void bfs(int v)
{
	visited[v]=1;
	printf("%4d",v);
	insert(v);
	while(f<=r)
	{
		v=remqueue();
		for(i=1;i<=n;i++)
		{
			if(adj[v][i]==1 && visited[i]==0)
			{
				insert(i);
				visited[i]=1;
				printf("%4d",i);
			}
		}
	}
}
void main()
{
	printf("\n Enter No of Vertices:");
	scanf("%d",&n);
	createGraph();
	bfs(1);
	return;
}
