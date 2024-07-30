#include<stdio.h>
#include<string.h>
void main()
{
	char a[50];
	int wordposition(char[],int);
	int res,wno;
	printf("\nenter string");
	gets(a);
	printf("\n word number");
	scanf("%d",&wno);
	res=wordposition(a,wno);
	if(res==-1)
	{
		printf("\ninvalide word");
		
	}
	else
		printf("\nword:%d begins at position %d",wno,res);
	return;	
}
int wordposition(char b[],int no)
{
	int i=0,cnt=1,pos=0;
	while(b[i]!='\0'&&cnt<no)
	{
		if(b[i]==32&&b[i+1]!=32)
		{
			cnt++;
			pos=i+1;
			
		}
		i++;
		
	}
	if(b[i]=='\0')
	   return -1;
	 else
	    return pos;  
}














