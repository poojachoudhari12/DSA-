#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node*next;
}NODE;
typedef struct stack
{
	NODE*top;
	
}STK;

void init(STK*t)
{
	t->top=NULL;
}

NODE*createNode(int d)
{
	NODE*a;
	a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->next=NULL;
	return a;
}

void push(STK *t,int d)
{
	NODE*a=createNode(d);
	a->next=t->top;
	t->top=a;
}

void pop(STK*t)
{
	NODE*a=t->top;
	if(t->top==NULL)
	{
		printf("\nunderflow");
		return;
	}
	t->top=a->next;
	free(a);
}

void display(STK*t)
{
	NODE*a=t->top;
	if(t->top==NULL)
	{
		printf("\nempty stack");
		return;
	}
	printf("\nstack data");
	while(a!=NULL)
	{
		printf("%4d",a->data);
		a=a->next;
	}
}
void main()
{
	int opt,d;
	STK s;
	init (&s);
	while(1)
	{
		printf("\nmenu\n1.push\n2.pop\n3.display\n4.exit\noption:");
		scanf("%d",&opt);
		if(opt>=4)
		break;
		switch(opt)
		{
			case 1:
				printf("\nenter data:");
				scanf("%d",&d);
				push(&s,d);
				break;
			case 2:
				pop(&s);
				break;
			case 3:
				display(&s);
				break;
						
		}		
		
	}	
}