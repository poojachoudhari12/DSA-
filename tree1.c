//implement of binary search
#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
	struct node *left;
	int data;
	struct node*right;
	
}NODE;

typedef struct last
{
	NODE *rt;
	NODE *curr;
	NODE *prnt;
	
}BST;
NODE *createNode(int d)
{
	NODE *a;
	a=(NODE*)malloc(sizeof(NODE));
	a->data=d;
	a->letf=a->right=NULL;
	return a;
}
 void init(BST *t)
 {
 	t->rt=NULL;
 	t->prtNULL;
 	t->curr=NULL;
 }
 //create bst
 void createBST(BST *t)
 {
 	NODE *p,*q;
 	int d;
 	while(1)
 	{
 		printf("\ndata:");
 		scanf("%d",&d);
 		if(d==0)
 		break;
 		if(t->rt==NULL)
 		t->rt==createNode(d);
 		else
 		{
 			p=t->rt;
 			while(1)
 			{
 				if(d<p->data)
 				{
 					if(p->left==NULL)
 					{
 						p->left=craeteNode(d);
 						break;
					 }
					 else
					 {
					 	p=p->left;
					 	
					 }
					 
				 }
				 else
				 {
				 	if(p->right==NULL)
				 	{
				 		p->right=createNode(d);
				 		break;
					 }
					 else
					 p=p->right;
				 }
			 }
		 }
	 }
 }
 void preorder(NODE *a)
 {
 	if(a!=NULL)
 	{
 		printf("%4d",a->data);
 		preorder(a->left);
 		preorder(a->right);
 		
	 }
	 else
	 return;
	 
 }
 void inorder(NODE *a)
 {
 	if(a!=NULL)
 	{
 		inoder(a->left);
 		printf("%4d",a->data);
	 }
 }
 
 //postorder,l-r-rt
void postorder(NODE *a)
{
    if(a!=NULL)
    {
        postorder(a->left);
        postorder(a->right);
        printf("%4d",a->data);
    }
    else
        return;
}

//create tree
void createTree(BST *t)
{
    NODE *a,*b;
    int d;
    while(1)
    {
        printf("\ndata:");
        scanf("%d",&d);
        if(d==0)
            break;
        if(t->rt==NULL)
            t->rt=createNode(d);
        else
        {
            a=t->rt;
            while(1)
            {
                if(d<a->data)
                {
                    if(a->left==NULL)
                    {
                        a->left=createNode(d);
                        break;
                    }
                    else
                        a=a->left;
                }
                else
                {
                    if(a->right==NULL)
                    {
                        a->right=createNode(d);
                        break;
                    }
                    else    
                        a=a->right;
                }
            }
        }
    }
}


void main()
{
    int opt,d,res;
    BST p;
    init(&p);
    while(1)
    {
        printf("\nBinary Search Tree\nMENU\n1.Create Tree\n2.Preorder\n3.Inorder\n4.Postorder\n5.exit\nOption:\n");
        scanf("%d",&opt);
        if(opt>4)
            break;
        switch(opt)
        {
            case 1:
                createTree(&p);
                break;
            case 2:
                printf("\nPreorder\n");
                preorder(p.rt);
                break;
            case 3:
                printf("\nInorder\n");
                inorder(p.rt);
                break;
            case 4:
                printf("\nPostorder\n");
                postorder(p.rt);
                break;
            

        }
		}
		        
    }