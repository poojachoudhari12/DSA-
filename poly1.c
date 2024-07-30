#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	int coe;
	int man;
	struct node*next;
	
}NODE;
typedef struct POLY
{
	NODE*st;
	
}POLY;
void init(POLY *t)
{
	t->st=NULL;
}
NODE *createnode(int c,int m)
{
	NODE *a=(NODE*)malloc(sizeof(NODE));
	a->coe=c;
	a->man=m;
	a->next=NULL;
	return a;
}
void createpoly(POLY *t)
{
	NODE *a=t->st,*b;
	int c,m;
	while(t->st!=NULL)
	{
		t->st=a->next;
		free(a);
		a=t->st;
	}
	printf("\n emter coe and man");
	while(1)
	{
		scanf("%d%d",&c,&m);
		if(c==0&&m==0)
			break;
		if(t->st==NULL)
			a=t->st=createnode(c,m);
		else
		{
			if(b->man<=m)
				continue;
			a=createnode(c,m);
			b->next=a;
		}
		b=a;
	}
}
void displaypoly(POLY *t)
{
	NODE*a=t->st;
	if(t->st==NULL)
	printf("\n empty list");
	else
	{
		printf("\n poly\n");
		while(a!=NULL)
		{
			if(a->coe>0)
				printf("+");
				printf("%dX%d",a->coe,a->man);
				a=a->next;
		}
	}
}
POLY add(POLY *p,POLY *q)
{
	NODE *a=p->st,*b=q->st,*c,*d;
	int co,ma;
	POLY r;
	init(&r);
	while(a!=NULL&&b!=NULL)
	{
		if(a->man==b->man)
		{
			co=a->coe+b->coe;
			ma=a->man;
			a=a->next;
			b=b->next;
		}
		else
		{
			if(a->man>b->man)
			{
				co=a->coe;
				ma=a->man;
				a=a->next;
			}
			else
			{
				co=b->coe;
				ma=b->man;
				b=b->next;
			}
		}
		if(r.st==NULL)
			r.st=c=createnode(co,ma);
		else
		{
			c=createnode(co,ma);
			d->next=c;
		}
		d=c;
	}
	while(a!=NULL)
	{
		co=a->coe;ma=a->man;
		c=createnode(co,ma);
		d->next=c;
		d=c;
		a=a->next;
	}
	while(b!=NULL)
	{
		co=b->coe;ma=b->man;
		c=createnode(co,ma);
		d->next=c;
		d=c;
		b=b->next;		
	}
	return r;
}
POLY sub(POLY *p,POLY *q)
{
	NODE *a=p->st,*b=q->st,*c,*d;
	int co,ma;
	POLY r;
	init(&r);
	while(a!=NULL&&b!=NULL)
	{
		if(a->man==b->man)
		{
			co=a->coe-b->coe;
			ma=a->man;
			a=a->next;
			b=b->next;
		}
		else
		{
			if(a->man>b->man)
			{
				co=a->coe;
				ma=a->man;
				a=a->next;
			}
			else
			{
				co=-1*b->coe;
				ma=b->man;
				b=b->next;
			}
		}
		if(r.st==NULL)
			r.st=c=createnode(co,ma);
		else
		{
			c=createnode(co,ma);
			d->next=c;
		}
		d=c;
	}
	while(a!=NULL)
	{
		co=a->coe;ma=a->man;
		c=createnode(co,ma);
		d->next=c;
		d=c;
		a=a->next;
	}
	while(b!=NULL)
	{
		co=-1*b->coe;
	
		c=createnode(co,ma);
		d->next=c;
		d=c;
		b=b->next;		
	}
	return r;
}

//multi
POLY mult(POLY*p,POLY*q)
{
	NODE*a=p->st,*b=q->st,*c,*d;
	int co,ma;
	NODE *e=NULL,*f=NULL;
	POLY r;
	init(&r);
	while(b!=NULL)
	{
		a=p->st;
		while(a!=NULL)
		{
			co=a->coe*b->coe;
			ma=a->man+b->man;
			if(r.st==NULL)
			r.st=c=createnode(co,ma);
			else
			{
				e=r.st;
				while(e!=NULL&&e->man>=ma)
				{
					if(e->man==ma)
					{
						e->coe+=co;
						break;
					}
					f=e;
					e=e->next;
				}
				if(e==NULL)
				f->next=createnode(co,ma);
				else
				{
					c=createnode(co,ma);
					c->next=e;
					f->next=c;
				}
				
			}
			
		}
		a=a->next;
		
	}
	b=b->next;

return r;
}
void main()
{
	POLY p,q,r;
	int opt;

	init(&p);init(&q);init(&r);
	while(1)
	{
		printf("\nmenu\n1.createlist1\n2createlist2\n3.display list 1\n4.displaylist2\n5.displaylist3\n6add\n7substract\n8multi\n9exit\noption");
		scanf("%d",&opt);
		if(opt>8)
		break;
		switch(opt)
		{
			case 1:
				createpoly(&p);break;
			case 2:
				createpoly(&q);break;
			case 3:
				displaypoly(&p);break;
			case 4:
				displaypoly(&q);break;
			case 5:
				displaypoly(&r);break;
			case 6:
				r=add(&p,&q);break;
			case 7:
				r=sub(&p,&q);break;
			case 8:
				r=mult(&p,&q);break;
					
		}
	}
}