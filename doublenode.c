#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}NODE;
typedef struct dlist
{
	NODE *st;
	NODE *ed;
}DLIST;
void init(DLIST *t)
{
	t->st=NULL;
	t->ed=NULL;
}
NODE* createNode(int d)
{
	NODE *a;
	a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->prev=a->next=NULL;
	return a;
}
//fn to add
void addE(DLIST *t,int d)
{
	NODE *a,*b;
	a=createNode(d);
	if(t->st==NULL)
		t->st=a;
	else
	{
		b=t->ed;
		b->next=a;
		a->prev=b;
	}
	t->ed=a;
}

void addB(DLIST *t,int d)
{
	NODE *a,*b;
	a=createNode(d);
	if(t->ed==NULL)
		t->ed=a;
	else
	{
		b=t->st;
		a->next=b;
		b->prev=a;
	}
	t->st=a;	
}

//fn to display
void dispSE(DLIST *t)
{
	NODE *a=t->st;
	if(t->st==NULL)
		printf("\nempty list");
	else
	{
		printf("\nlist data");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->next;
		}
	}	
}

void dispES(DLIST *t)
{
	NODE *a=t->ed;
	if(t->ed==NULL)
		printf("\nempty list");
	else
	{
		printf("\n list data from end to start");
		while(a!=NULL)
		{
			printf("%4d",a->data);
			a=a->prev;
		}
	}	
}

//fn to count no. of node
int count(DLIST *t)
{
	int cnt=0;
	NODE *a=t->st;
	while(a!=NULL)
	{
		cnt++;
		a=a->next;
	}
	return cnt;
}

//fn total
int sum(DLIST *t)
{
	int sum=0;
	NODE *a=t->st;
	while(a!=NULL)
	{
		sum=sum+a->data;
		a=a->next;
	}
	return sum;
}

//fn to delete first node
void delfirst(DLIST *t)
{
	NODE *a=t->st,*b;
	if(t->st==NULL)
		return;
	if(t->st==t->ed)
		t->st=t->ed=NULL;	
	else
	{
		b=a->next;
		b->prev=NULL;
		t->st=b;
	}
	free(a);
	return;	
}

//fn to delete last
void delLast(DLIST *t)
{
	NODE *a=t->ed,*b;
	if(t->ed==NULL)
		return;
	else
	{
		b=a->prev;
		b->next=NULL;
		t->ed=b;
	}
	free(a);
	return;	
}
	
//fn to del all nodes
void delAll(DLIST *t)
{
	while(t->st!=NULL)
	{
		delfirst(t);
	}
}

//fn to del ith node
void deliNode(DLIST *t,int pos)
{
	NODE *a=t->st,*b,*c;
	int i=1;
	if(pos<1||t->st==NULL)
		return;
	if(pos==1)
		delfirst(t);
	else
	{
		while(i<pos&&a!=NULL)
		{
			b=a;
			a=a->next;
			i++;
		}		
	if(a==NULL)
		return;
	if(a->next==NULL)
	{
		delLast(t);
		return;		
	}
	c=a->next;
	b->next=c;
	c->prev=b;
	free(a);
}	
}
//fn to insert new node
void insertB(DLIST *t,int pos,int d)
{
	NODE *a=t->st,*b,*c;
	int i=1;
	if(pos<1||t->st==NULL)
	return;
	if(pos==1)
	addB(t,d);
	else
	{
		while(i<pos&&a!=NULL)
		{
			b=a;
			a=a->next;
			i++;
			
		}
		if(a==NULL)
		return;
		c=createNode(d);
		b->next=c;
		c->prev=b;
		c->next=a;
		a->prev=c;
	}
		
	}
//insert ith node after 
void insertE(DLIST *t,int pos,int d)
{
	NODE *a=t->st,*b,*c;
	int i=1;
	if(pos<1||t->st==NULL)
	return;
	while(i<=pos&&a!=NULL)
	{
		b=a;
		a=a->next;
		i++;
		
	}
	if(i<pos)
		return;
	else
	{
		if(i>pos)
			addE(t,d);
		else
		{
			c=createNode(d);
			b->next=c;
			c->prev=b;
			c->next=a;
			a->prev=c;
			
		}
	}
}
//main
void main()
{
	DLIST p;
	int opt,d,pos;
	init(&p);
	while(1)
	{
		printf("\n menu\n1.add at end\n2.add at begin\n3.display from start to end\n4.display from end to start\n5.count\n6.sum\n7.del first\n8.delete last\n9.delete all\n10.del ith node\n11.insert new node before ith pos\n12.insert after ith pos\n13.exit\noption:");
		scanf("%d",&opt);
		if(opt>13)
			break;
		switch(opt)
		{
			case 1:
				printf("\n enter data element to add");
				scanf("%d",&d);
				addE(&p,d);
				break;
			case 2:
				printf("\n enter data element to add");
				scanf("%d",&d);
				addB(&p,d);
				break;
			case 3:
				printf("\n data from start to end");
				dispSE(&p);
				break;
			case 4:
				printf("\n data from end to start");
				dispES(&p);
				break;
			case 5:
				printf("\n node count:%d",count(&p));
				break;
			case 6:
				printf("\n data sum:%d",sum(&p));
				break;
			case 7:
				delfirst(&p);break;
			case 8:
				delLast(&p);break;
			case 9:
				delAll(&p);break;
			case 10:
				printf("\n enter node number to delete");
				scanf("%d",&pos);
				deliNode(&p,pos);
				break;
			case 11:
				printf("\nenter data");
				scanf("%d",&d);
				printf("enter pos to insertr before");
				scanf("%d",&pos);
				insertB(&p,pos,d);
				break;
			case 13:
				printf("\nenter data");
				scanf("%d",&d);
				printf("enter pos to insertr after");
				scanf("%d",&pos);
				insertE(&p,pos,d);
				break;
				
		}
	}
}
