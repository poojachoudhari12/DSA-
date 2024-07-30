#include<stdio.h>
void main()
{
	int *ptr;
	int n,i=0;
	printf("\n information count:");
	scanf("%d",&n);
	ptr=(int *)malloc(n*sizeof(int));
	printf("\n data\n");
	while(i<n)
	{
		scanf("%d",(ptr+i));
		i++;
	}
	printf("\ndata\n");
	for(i=0;i<n;i++)
	{
		printf("%4d",*(ptr+i));
	}
	free(ptr);
	return;
}