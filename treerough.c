void delNode(BST *t)
{
	int d,res;
	NODE *p,*q,*r,*s;
	printf("\nenter data to delete:");
	scanf("%d",&d);
	res=search(t,d);
	if(res==0)
	{
		printf("\nNo such data\n");
		return;
	}
	p-t->prnt;
	q=t->curr;
	if(q->left==NULL&&q->right==NULL)
	{
		if(p->left==q)
	}
}
