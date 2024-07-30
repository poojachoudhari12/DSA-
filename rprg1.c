#include<stdio.h>
void main()
{
	int *ptr;
	int n;
	int *allocate_memory;
	void int_data(int*,int);
	void display_data(int*,int);
	int total(int*,int);
	printf("\n enter information count:");
	scanf("%d",&n);
	ptr=allocate_memory(n);
	intput_data(ptr,n);
	display_data(ptr,n);
	printf("\nsum:%d",total(ptr,n));
	free(ptr);
	return;
}
int *allocate_memory(int n);
{
	return(int*)malloc(n*sizeof(int));
}

void input_data(int *a,int n)
{
	int i=0;
	while(i<n)
	{
		printf("\nenter no:");
		scanf("%d",(a+i));
		i++;
	}
}

void display_data(int *a,int n)
{
	int i=0;
	printf("\ndata\n");
	while(i<n)
	{
	printf("%4d",a[i++]);
}

int total(int *a,int n)
{
	int tot=a[0],i=1;
	while(i<n)
	{
		tot=tot+a[i++];
	}
	return tot;
}