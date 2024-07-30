//collision resolution using linked list
#include<stdio.h>
struct student {
	int no;
	char nm[50];
	struct student*next;
}k[10];
void init()
{
	int i=0;
	while(i<10)
	{
		k[i].no=0;
		k[i].next=NULL;
		i++;
	}
}
int hash(int val)
{
	return (val%10);	
}

struct student *createNode(int d)
{
	struct student *a;
	a=(struct student*)malloc(sizeof(struct student));
	a->no=d;
	printf("\nName:");
	scanf("%s",a->nm);
	a->next=NULL;
	return a;
}

void insert()
{
	struct student*a,*b;
	int d,hval;
	printf("\nroll no:");
	scanf("%d",&d);
	hval=hash(d);
	if(k[hval].no==0)
	{
		k[hval].no=d;
		printf("\nname:");
		scanf("%s",k[hval].nm);
		printf("\ninsert at prime area");
		return;
	}
	printf("\nCollision occured");
	a=createNode(d);
	a->next=k[hval].next;
	k[hval].next=a;
}

void search()
{
	struct student*a,*b;
	int d,hval,no;
	printf("\nroll no:");
	scanf("%d",&d);
	hval=hash(d);
	if(k[hval].no==no)
	{
		k[hval].no=d;
		printf("\nname:");
		printf("%s",k[hval].nm);
		printf("\nfound at prime area");
		return;
	}
	printf("\nsearch in overflow area");
	a=k[hval].next;
	while(a!=NULL)
	{
		if(a->no==no)
		break;
		a=a->next;
	
	}
	if(a==NULL)
	printf("\n not");
	else
	{
		printf("\nName:%s",a->nm);
		printf("\nFound");
	}
	return;
}
void main()
{	int opt;
	init ();
	while(1)
	{
		printf("\nMenu\n1.inesrt\n2.search\n3.exit\noption");
		scanf("%d",&opt);
		if(opt>2)
		break;
		if(opt==1)
		insert();
		else
		search();
	}
}