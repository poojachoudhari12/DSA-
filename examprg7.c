#include<stdio.h>
void main()
{
	int side1,side2,side3;
	printf("enter length of side:");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2&&side2==side3)
		printf("triangle is equilatral");
	else
		if(side1==side2||side2==side3||side3==side1)
			printf("triangle is isoscalen");
		else
		printf("triangle is scalene");
	return;			
}