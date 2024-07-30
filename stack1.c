#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
	int arr[5];
	int top;
}STK;

void init(STK *t)
{
	t->top=-1;
}

void push(STK *t,int d)
{
	if(t->top==4)
	{
		printf("\noverflow");
		return;
	}
	t->top++;
	t->arr[t->top]=d;
}

void pop(STK *t)
{
	if(t->top==-1)
	{
		printf("\nunderflow");
		return;
	}
	t->top--;
}

void display(STK*t)
{
	int i=t->top;
	if(t->top==-1)
	{
		printf("\nempty list");
		return;
	}
	printf("\nstack data");
	while(i>=0)
	{
		printf("\%4d",t->arr[i]);
		i--;
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