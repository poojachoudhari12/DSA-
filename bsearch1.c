#include"myarray.h"
#include<stdio.h>
int bsearch(int *a,int sv)
{
	int l=0,r=M-1,mid;
	do{
		mid=(l+r)/2;
		if(a[mid]==sv)
		break;
		if(sv<a[mid])
		r=mid+1;
		else
		l=mid+1;
	}while(l<=r);
	if(l<=r)
	return 1;
	else
	return 0;
}

int main()
{
	int x[M],sv,res;
	input(x);
	printf("\nenter search value:");
	scanf("%d",&sv);
	res=bsearch(x,sv);
	if(res==0)
	{
		printf("\nnot found");
	}
	else
	printf("\nfound");
	return 0;
}