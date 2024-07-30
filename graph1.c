#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node*next;
}*k[10];
int visited[10];
int n;
struct node*createnode(int d)
{
 	struct node*a;
	a=(struct node*)malloc(sizeof(struct node));
	a->data=d;
	a->next=NULL;
	return a;
}
void creategraph()
{
	int i,d;
	struct node*p,*q;
	while(i<=n)
	{
		printf("\nvertex");
		scanf("%d",&d);
		k[i]=p=createnode(d);
		printf("\nadjacent node:\n");
		while(1)
		{
			scanf("%d",&d);
			if(d==0)
			break;
			p->next=createnode(d);
			p=p->next;
		
	}
	i++;
}
}
void dft(int v)
{
	struct node*p;
	visited[v]=1;
	p=k[v];
	printf("%4d",p->data);
	while(p!=NULL)
	{
		if(visited[p->data]==0)
		dft(p->data);
		else
		p=p->next;
	}
}

void main()
{
	printf("\nenter vertex count:");
	scanf("%d",&n);
	creategraph();
	dft(1);
	return;
	
}