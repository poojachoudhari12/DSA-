//radix sort
#include<stdio.h>
#define N 10
typedef struct que
{
	int arr[N];
	int fr,rr;
}QUE;
QUE p[N];//array of qqque
void init()
{
	int i=0;
	while(i<N)
	{
		p[i].rr=-1;
		p[i].fr=0;
		i++;
	}
	}
	int getDigit(int val,int pos)
	{
		int index;
		switch(pos)
		{
			case 1://right most
				index=val%10;
				break;
			case 2://middle
				index=(val/10)%10;
				break;
			case 3:
				index=val/100;
				break;
						
		}
		return index;
	}
	void insert(int *a,int pos)
	{
		int i=0,index,j;
		init();
		while(i<10)
		{
			index=getDigit(a[i],pos);
			j=++p[index].rr;
			p[index].arr[j]=a[i];
			i++;
		}
	}
	void remque(int *a)
	{
		int i=0,j=0,k=0,val;
		while(i<N)
		{
			j=0;
			while(j<=p[i].rr)
			{
				a[k++]=p[i].arr[j];
				j++;
			}
			i++;
			
		}
	}
	void radix(int *a)
	{
		int pos=1;
		while(pos<=3)
		{
			insert(a,pos);
			remque(a);
			pos++;
		}
	}
	
	void input(int *a)
	{
		int i=0;
		while(i<N)
		{
			printf("\nenter 3 digit no:");
			scanf("%d",a+i);
			if(a[i]<100||a[i]>999)
			continue;
			i++;
		}
	}
	void display(int *a,int flg)
	{
		int i=0;
		if(flg==0)
		printf("\nbefore sorting");
		else
		printf("\nafter sorting");
		while(i<N)
		{
			printf("%4d",a[i]);
			i++;
		}
	}
	
	void main()
	{
		int x[N];
		input(x);
		display(x,0);
		radix(x);
		display(x,1);
		return;
	}