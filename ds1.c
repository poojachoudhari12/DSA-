#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}NODE;
NODE *st=NULL;
//fun to create node
NODE *createNode(int d)
{
	NODE *a;
	a=(NODE *)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}
//fun to retrieve last NODE
NODE * getlastNODE()
{
	NODE *a=st;
	while(a->next!=NULL)
	a=a->next;
	return a;
}
//fun to display data
void display()
{
	NODE *a=st;
	if(st==NULL)
		printf("\nempty list");
	else
	{
		printf("\n data\n");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}	
}

//fun to add new NODE at end
void addE(int d)
{
	NODE *a,*b;
	a=createNode(d);
	if(st==NULL)
	st=a;
	else
	{
		b=getlastNODE();
		b->next=a;
	}
}

//fn to add new node at begin

void addB(int d)
{
	NODE *a=createNode(d);
	a->next=st;
	st=a;
}

void main()
{
	int opt,d;
	while(1)
	{
		printf("\n Linked list\nmenu\n1.add end\n2.add begin\n3.display\n4.exit\noption:");
		scanf("%d",&opt);
		if(opt>3)
		break;
		switch(opt)
		{
			case 1:
				printf("\nadd data at end");
				scanf("%d",&d);
				addE(d);
				break;
			case 2:
				printf("\nadd data at beg:");
				scanf("%d",&d);
				addB(d);
				break;
			case 3:
				display();
				
		}
	}
}

