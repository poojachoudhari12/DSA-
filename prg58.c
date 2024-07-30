#include<stdio.h>
void main()
{
	int x,i=1,pcnt=0,ncnt=0;
	while(i<=10)
	{
		printf("\nenter no:");
		scanf("%d",&x);
		if(x>0)
	       pcnt+=x;
	    else
		   ncnt+=x;
	i++;	      
	}
	printf("\npcnt:%d\nncnt:%d",pcnt,ncnt);
	return;
}