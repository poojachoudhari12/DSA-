#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
typedef struct queue
{
	NODE *fr;
	NODE *rr;
}QUE;

void init(QUE *t)
{
	t->fr=NULL;
	t->rr=NULL;
}

NODE *createNode(int d)
{
	NODE *a;
	a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}

void insert(QUE *t,int d)
{
	NODE *a=createNode(d),*b;
	if(t->fr==NULL)
		t->fr=a;
	else
	{
		b=t->rr;
		b->next=a;
	}
	t->rr=a;		
}

void remque(QUE *t)
{
	NODE *a=t->fr;
	if(t->fr==NULL)
		printf("\nunder flow");
	else
	{
		if(t->fr==t->rr);
		t->rr=NULL;
		t->fr=a->next;
	}
	free(a);
}

void display(QUE *t)
{
	NODE *a=t->fr;
	if(t->fr==NULL)
		printf("\nempty QUEUE");
	else
	{
		printf("\ndata:\n");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}
}

void menu(QUE *t)
{
	int opt,d;
	while(1)
	{
	
	printf("\nQueue\n1.insert\n2.remove\n3.display\n4.exit\noption");
	scanf("%d",&opt);
	if(opt>3)
	  break;
	switch(opt)
	{
		case 1:
			printf("\ndata");
			scanf("%d",&d);
			insert(t,d);
			break;
		case 2:
			remque(t);
			break;
		case 3:
			display(t);	
			break;	
		}
	}
}
void main()
{
	QUE a;
	init(&a);
	menu(&a);
}
