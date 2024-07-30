#include<stdio.h>
void main()
{
	int i=1,pcnt=0,ncnt=0,x;
    while(i<=10)
    {
    	printf("\nenter no:");
    	scanf("%d",&x);
    	if(x>0)
    		pcnt++;
    	else
			ncnt++;
		i++;	
	}
	printf("\npcnt:%d\nncnt:%d",pcnt,ncnt);
	return;
	
	
}