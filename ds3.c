#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}NODE;
typedef struct SLIST
{
	NODE *st;
	int cnt;
}SLIST;

void init(SLIST *t)
{
	t->st=NULL;
	t->cnt=0;
}
//fn to create node
NODE *createnode(int d)
{
	NODE *a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}
//fn to get last node;
NODE *getLastNode(SLIST *t)
{
	NODE *a=t->st;
	while(a->next!=NULL)
	{
		a=a->next;
	}
	return a;
}

//fn add new node at end
void addE(SLIST *t,int d)
{
	NODE *a=createnode(d),*b;
	if(t->st==NULL)
	t->st=a;
	else
	{
		b=getLastNode(t);
		b->next=a;
	}
	t->cnt++;
}

//fn add new node at begin
void addB(SLIST *t,int d)
{
	NODE *a=createnode(d);
	a->next=t->st;
	t->st=a;
	t->cnt++;
}
//fn to display
void display(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
	{
		printf("\n empty list");
	}
	else
	{
		printf("\ndata");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}
}

//fn to display odd data
void odisplay(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
	{
		printf("\nempty list");
	}	
	else
	{
		printf("\n data");
		while(a!=NULL)
		{
			if(a->data%2==1)
			{
				printf("%4d",a->data);
				a=a->next;
			}
		}
	}
	
}
//fn to display even data
void edisplay(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
	{
		printf("\nempty list");
	}	
	else
	{
		printf("\n data");
		while(a!=NULL)
		{
			if(a->data%2==0)
			{
				printf("%4d",a->data);
				a=a->next;
			}
		}
	}
	
}

//fn to compute data
int sum(SLIST *t)
{
	NODE *a=t->st;
	int sum=0;
	while(a!=NULL)
	{
		sum+=a->data;
		a=a->next;

	}
	return sum;
}
//fn to delete first node
void delfirst(SLIST *t)
{
	NODE *a=t->st;
	if(t->st==NUL)
	return;
	t->st=a->next;
	t->cnt--;
	free(a);
}
//fn to delete last node
void delLast(SLIST *t)
{
	NODE *a=t->st,*b;
	if(t->st==NULL)
	return;
	if(a->next==NULL)
	t->st=NULL;
	else
	{
		while(a->next!=NULL)
		{
			b=a;
			a=a->next;
		}
		b->next=NULL;
	}
	t->cnt--;
	free(a);
}
//fn to delete all node
void delall(SLIST *t)
{
	NODE *a=t->st;
	while(t->st!=NULL)
	{
		t->st=a->next;
		free(a);
		a=t->st;
	}
	t->cnt=0;
}
//fn to search data
int search(SLIST *t,int d)
{
	NODE *a=t->st;
	while(a!=NULL)
	{
		if(a->data==d)
			break;
		a=a->next;
	}
	if(a==NULL)
		return 0;
	else
		return 1;
}
void main()
{
	SLIST p;
	int opt,d,res,sv,rv;
	init(&p);
	while(1)
	{
		printf("\nMenu\n1.add end\n2.add begin\n3.display\n4.odd data display\n5.even data display\n6.sum\n7.exit\noption:");
		scanf("%d",&opt);
		if(opt>7)
		break;
		switch(opt)
		{
			case 1:
				printf("\ndata at end:");
				scanf("%d",&d);
				addE(&p,d);
				break;
			case 2:
				printf("\ndata at begin:");
				scanf("%d",&d);
				addB(&p,d);
				break;
			case 3:
				display(&p);
				break;
			case 4:
				odisplay(&p);
				break;
			case 5:
				edisplay(&p);
				break;		
			case 6:
				printf("\nsum:%d",sum(&p));
				break;	
			case 7:
						
	}
}
}
