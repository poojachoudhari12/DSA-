#include<stdio.h>
typedef struct account
{
	int acno;
	char acnm[15];
	int acbal;
	int acstate;
}ACC;

FILE *fa;
ACC ac;

void update(int n)
{
	ac.acno=n;
	printf("\n A/C holder name:");
	scanf("%s",ac.acnm);
	do
	{
		printf("\n A/C balance:");
		scanf("%d",&ac.acbal);
	}while(ac.acbal<500);
	
	ac.acstate=1;
}

void display()
{
	printf("\n %5d %-15s %5d %d",ac.acno,ac.acnm,ac.acbal,ac.acstate);
}

//fn to search acc record

int search(int no)
{
	int pos=0;
	rewind(fa);
	while(1)
	{
		fread(&ac,sizeof(ACC),1,fa);
		if(feof(fa))
		{
			pos=-1;
			break;
		}
		if(ac.acno==no)
		break;
		pos=ftell(fa);
		
	}
	return pos;
}

//fn to add new ac record
void add()
{
	int no,pos;
	printf("\nenter A/cno:");
	scanf("%d",&no);
	pos=search(no);
	if(pos>=0)
	{
		printf("\n record exit:");
		return;
	}
	update(no);
	fseek(fa,0,SEEK_END);
	fwrite(&ac,sizeof(ACC),1,fa);
	printf("\nrecord inserted");
	return;
}

//fn to modify acc
void mod()
{
	int pos,no;
	printf("\n enter ac no:");
	scanf("%d",&no);
	pos=search(no);
	if(pos==-1)
	printf("\n invalide a/c");
	else
	{
		update(no);
		fseek(fa,pos,SEEK_SET);
		fwrite(&ac,sizeof(ACC),1,fa);
		
	}
}

//fn to to delete acc type record
void del()
{
	int no,pos;
	printf("\n enter a/c no to delete: ");
	scanf("%d",&no);
	pos=search(no);
	if(pos==-1)
	{
		printf("\n invalide a/c");
	}
	else
	{
		if(ac.acstate==0)
	     printf("\n record delete:");
	    else
	    	{
	    		ac.acstate=0;
	    		fseek(fa,pos,SEEK_SET);
	    		fwrite(&ac,sizeof(ACC),1,fa);
			}
	     
	}
}

//fn to display all acc typed data
void displayall()
{
	rewind(fa);
	while(1)
	{
		fread(&ac,sizeof(ACC),1,fa);
		if(feof(fa))
		break;
		display();
	}
}

void main()
{
	int opt;
	fa=fopen("acc.dat","r+b");
	if(fa==NULL)
	{
		fa=fopen("acc.dat","wb");
		fclose(fa);
		fa=fopen("acc.dat","r+b");
	}
	while(1)
	{
		printf("\nacc menu\n1.add\n2.modify\n3.dalete\n4.display\n5.exit\noption");
		scanf("%d",&opt);
		if(opt>4)
		break;
		switch(opt)
		{
			case 1:
				add();
				break;
			case 2:	
				mod();
				break;
			case 3:
				del();
				break;
			case 4:
				displayall();
				break;
						
		}
	}
	fclose(fa);
	
}