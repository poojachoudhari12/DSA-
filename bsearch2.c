//create a header file with name myarry.h
#define M 10
void input(int *a)
{
	int i=0;
	while(i<m)
	{
		printf("\n data:");
		scanf("%d",(a+i));
		if(i>0)
		{
			if(a[i]<a[i-1])
			{
				printf("\ninvalide");
			}
		}
		i++;
	}
	
}
 void display(int *a)
 {
 	int i=0;
 	printf("\narray data:");
 	while(i<m)
 	{
 		printf("%4d",a[i]);
 		i++;
	 }
 }