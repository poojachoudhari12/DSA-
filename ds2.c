#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;

NODE *st=NULL;

//fn to create node
NODE *createNode(int d)
{
	NODE *a;
	a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}

//fn to get last node
NODE *getlastNode()
{
	NODE *a=st;
	while(a->next!=NULL)
	a=a->next;
	return a;
}

//fn to display data of list
NODE display()
{
	NODE *a=st;
	if(st==NULL)
		printf("\n empty list");
	else
	{
		printf("\n data:");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}	
}

//fn to add new node at end
void addE(int d)
{
	NODE *a,*b;
	a=createNode(d);
	if(st==NULL)
		st=a;
	else
	{
		b=getlastNode();
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

//fn to count NODE from list
int count()
{
	int cnt=0;
	NODE *a=st;
	while(a!=NULL)
	{
		cnt++;
		a=a->next;
	}
	return cnt;
}

//fn to compute sum of data
int sum()
{
	int tot=0;
	NODE *a=st;
	while(a!=NULL)
	{
		tot=tot+a->data;
		a=a->next;
	}
	return tot;
}

//fn to delete first node
void delfirst()
{
	NODE *b=st;
	if(st==NULL)
	return;
	st=b->next;
	free(b);
}

//fn to delete last node
void delLast()
{
	NODE *b,*a=st;
	if(st==NULL)
	return;
	if(a->next==NULL)
	delfirst();
	else
	{
		while(a->next!=NULL)
 	    {
	    	b=a;
	    	a=a->next;	
		}
		b->next=NULL;
		free(a);
	}
}

//fn  delete allnode
void delALL()
{
	while(st!=NULL)
	 delfirst();
}

void main()
{
	int opt,d,res;
	while(1)
	{
		printf("\n Menu\n1.Add end\n2.Add begin\n 3.display\n4.count\n5.sum\n6.delete first node\n7.delete last\n8.delete all\n9.exit\noption:");
		scanf("%d",&opt);
		if(opt>8)
		 break;
		 switch(opt)
		 {
		 	case 1:
		 		printf("\n data at end:\n");
		 		scanf("%d",&d);
		 		addE(d);
		 		break;
		 	case 2:
			    printf("\n data at begin:\n");
				scanf("%d",&d);
				addB(d);
				break;
			case 3:
				display();
				break;
			case 4:
				res=count();
				printf("\nNODE:%d\n",res);
				break;
			case 5:
				printf("\ndata sum:%d\n",sum());
				break;
			case 6:
				delfirst();
				break;
			case 7:
				delLast();
				break;
			case 8:
				delALL();
				break;							
		 }
	}
}