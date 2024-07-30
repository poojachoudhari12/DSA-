#include<stdio.h>
#define M 5
typedef struct queue
{
	int arr[M];
	int fr,rr;
	
}QUE;

void init(QUE *t)
{
	t->rr=-1;
	t->fr=0;
}
int isfull(QUE *t)
{
	return(t->rr==M-1);
}
int isEmpty(QUE *t)
{
	return(t->rr<t->fr);
}

void insert(QUE *t,int d)
{
	if(isfull(t))
		printf("\noverflow");
	else
	{
		t->rr++;
		t->arr[t->rr]=d;
		}	
}

void remque(QUE *t)
{
	if(isEmpty(t))
			printf("\nunderflow");
	else
	{
		t->fr++;
	}		
}
void display(QUE *t)
{
	int i=t->fr;
	if(isEmpty(t))
		printf('\nEmpty queue');
	else
	{
		printf("\ndata");
		while(i<=t->rr)
			printf("%4d",t->arr[i++]);
	}		
}

void menu(QUE *t)
{
	int opt,d;
	while(1)
	{
		printf("\nQueue\n1.Insert\n2.remove\n3.display\n4.exit\noption");
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
						
		}
	}
}

void main()
{
	QUE a;
	init(&a);
	menu(&a);
}