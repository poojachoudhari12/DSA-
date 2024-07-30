#include<stdio.h>
void main()
{
	void message();
	int i=0;
	while(i<5)
	{
	message();
	i++;
	}
	return;	
}

void message()
{

	int i=0;
	while(i<5)
	{
	printf("\n welcome");
	i++;
	}
	return;
}

