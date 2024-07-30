#include<stdio.h>
#include<stdlib.h>

typedef struct cstack
{
	int top;
	char opr[50];
}CSTK;
void init(CSTK*t)
{
	t->top=-1;
}
int isFull(CSTK *t)
{
	return t->top==49;
}

int isEmpty(CSTK*t)
{
	return t->top==-1;
}

void push(CSTK *t,char ch)
{
	if(isFull(t))
	{
		printf("\noverflow");
		return;
	}
	t->opr[++t->top]=ch;
}

char pop(CSTK*t)
{
	return t->opr[t->top--];
}
void main()
{
	CSTK a;
	char p[50];
	char q[50];
	int i=0,j=0;
	init(&a);
	printf("\nenter string:");
	gets(p);
	while(p[i]!='\0')
	{
		push(&a,p[i]);
		i++;
	}
	while(!isEmpty(&a))
	{
		q[j++]=pop(&a);
		
	}
	q[j]='\0';
	puts(p);
	puts(q);
	return;
}