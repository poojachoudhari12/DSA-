//collision resolution using linear 
#include<stdio.h>
typedef struct student
{
	int no;
	char nm[50];
 }STU;
 
 STU k[10];
 
 int hash(int key)
 {
 	return key%10;
  } 
  
  void insert()
  {
  	int no,hval,i;
  	printf("\nRoll no:");
  	scanf("%d",&no);
  	hval=i=hash(no);
  	//search at home area;
  	if(k[i].no==0)
  	{
  		k[i].no=no;
  		printf("\nName:");
  		scanf("%s",k[i].nm);
  		printf("\ninsertion at home area");
  		return;
	  }
	  printf("\ncollision occured\n");
	  for(i=hval+1;i<10;i++)
	  {
	  	if(k[i].no==0)
	  	{
	  		k[i].no=no;
	  		printf("\ninvertion on collion part\n");
	  		break;
	  		
		  }
	  }
	  if(i<10);
	  return;
	  for(i=0;i<hval;i++)
	  {
	  		if(k[i].no==0)
	  	{
	  		printf("\nname:");
	  		printf("%s",k[i].nm);
	  		printf("\ninvertion on collion part\n");
	  		break;
	  		
		  }
		 
	  }
	   if(i==hval)
		  printf("\noverflow");
  }
  
   void search()
  {
  	int no,hval,i;
  	printf("\nRoll no to search:");
  	scanf("%d",&no);
  	hval=i=hash(no);
  	//search at home area;
  	if(k[i].no==no)
  	{
  		k[i].no=no;
  		printf("\nName:");
  		printf("%s",k[i].nm);
  		printf("\nsearch at home area");
  		return;
	  }
	  printf("\nsearch on collision path\n");
	  for(i=hval+1;i<10;i++)
	  {
	  	if(k[i].no==no)
	  	{
	  		printf("\nname:");
	  		printf("%s",k[i].nm);
	  		printf("\nsearch on collion part\n");
	  		break;
	  		
		  }
	  }
	  if(i<10);
	  return;
	  for(i=0;i<hval;i++)
	  {
	  		if(k[i].no==0)
	  	{
	  		k[i].no=no;
	  		printf("\ninvertion on collion part\n");
	  		break;
	  		
		  }
		 
	  }
	   if(i==hval)
		  printf("\noverflow");
  }
  
  
  
  void main()
  {
  	int opt ,i;
  	for(i=0;i<10;i++)
  	{
  		k[i].no=0;
	  }
	  while(1)
	  {
	  	printf("\nmenu\n1.insert\n2.search\n3.exit\nchoise:");
	  	scanf("%d",&opt);
	  	if(opt>2)
	  	break;
	  	if(opt==1)
	  	insert();
	  	else
	  	search();
	  	
	  }
	  
  }