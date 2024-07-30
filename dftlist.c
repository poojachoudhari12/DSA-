//dft adj list
#include<stdio.h>
struct node
{
	int data;
	struct node*next;
	
}*k[10];
int n;
int visited[10];
void createList()
{
	int i=1,d;struct node *p,*q;
	while(i<=n)
	{
		printf("\nenter vertex:");
		scanf("%d",&d);
		k[i]=p=(struct node*)malloc(sizeof(struct node));
		p->data=d;
		q->next=NULL;
		printf("\nadjcent vertices:");
		while(1)
		{
		printf("\nvertex:");
		scanf("%d",&d);
		if(d==0)
		break;
		q=(struct node*)malloc(sizeof(struct node));
		q->data=d;
		q->next=NULL;
		p->next=q;
		p=q;
	}
	i++;	
	}
}
void dft(int v)
{
	struct node *p;
	visited[v]=1;
	printf("%4d",v);
	p=k[v];
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
	printf("\nvertex:");
	scanf("%d",&n);
	createList();
	dft(1);
	
}