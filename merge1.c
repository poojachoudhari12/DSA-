#include<stdio.h>
#define M 10
void main()
{
	int x[M],tmp[M];
	int l1,u1,l2,u2,size=1;
	int i,j,k;
	for(i=0;i<M;i++)
	{
		printf("\ndata");
		scanf("%d",&x[i]);
	}
		while(size<M)
		{
			l1=0,k=0;
			while(l1+size<M)
			{
				l2=l1+size-1;
				u2=l2-1;
				if(l2+size<M)
					u2=l2+size-1;
				else
					u2=M-1;
				for(i=l1,j=l2;i<=u1&&j<=u2;k++)
				{
					if(x[i]<x[j])
						tmp[k]=x[i++];
					else
						tmp[k]=x[j++];	
						
				}
				for(;i<u1;i++)
					tmp[k++]=x[i];
				for(;j<=u2;j++)
					tmp[k++]=x[j];
				l1=u2+1;
			}	
			for(i=l1;i<M;i++)
				tmp[k++]=x[i];
			for(i=0;i<M;i++)
				x[i]=tmp[i];
			size=size*2;
		}
		printf("\nafter sorting:");
		for(i=0;i<M;i++)
				
				printf("%4d",x[i]);
			return;	
}       