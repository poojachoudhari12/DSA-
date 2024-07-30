#include<stdio.h>
typedef struct student
{
	int rno;
	char nm[15];
	int mrk,state;
}STU;
typedef struct NODE 
{
	STU data;
	stuct node * next;
}NODE;
typedef struct STU list
{
	NODE *st;
	int cnt;
	
}SLIST;
void init(SLIST *t)
{
	t->st=NULL;
	t->cnt=0;
}
//function to search stu record
void input(STU *t,int no)
{
	t->rno=no;
	printf("\n student name");
	scanf("%s",t->nm);
	printf("\n student marks");
	scanf("%d",&t->mrk);
	t->state=1;
}
void output(STU *t)
{
	printf("\n%5d%-15s%4d%d",t->rno,t->nm,t->mrk,t->state);
}
NODE *search(SLIST *t,int no)
{
	NODE *a=t->st;
	while(a!=NULL)
	{
		if((a->data).rno==no)
		a=a->next;
	}
	return a;
}
void add(SLIST *t)
{
	NODE *a;
	int no;
	printf("\n enter rollnumber");
	scanf("%d",&no);
	a=search(t,no);
	if(a!=NULL)
		printf("\n record exists");
	else
	{
		a=(NODE *)malloc((sizeof(NODE));
		input(&a->data,no);
		a->next=t->st;
		t->st=a;
		t->cnt++;
	}
}
void mod(SLIST *t)
{
	NODE *a;
	int no;
	printf("\n roll no");
	scanf("%d",&no);
	a=search(t,no);
	if(a==NULL||(a->data).state==0)
		printf("\n record not exists");
	else
	{
		input(&a->data,no);
	}
}
void del(SLIST *t)
{
	NODE *a;
	int no;
	printf("\n enter roll no");
	scanf("%d",&no);
	a=search(t,no);
	if(a==NULL||(a->data).state==0)
		printf("\n record not exists");
	else
	{
	
		(a->data).state=0;
	}
	
}
void display(SLIST *t)
{
	NODE *a=t->st;
	if(a==NULL)
		printf("\n empty list");
	else
	{
		while(a!=NULL)
		{
			output(&a->data);
			a=a->next;
		}
	}
}