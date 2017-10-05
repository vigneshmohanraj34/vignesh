#include <stdio.h>
#include<malloc.h>
void create(int d);
void ancestor(int a,int b);
struct tree
{
	int d;
	struct tree *left;
	struct tree *right;
}*root,*tmp,*tr,*prv;
void preorder(struct tree*,int,int);

int main(void) {
	int n,val,i,a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&val);
	create(val);
	}
	scanf("%d%d",&a,&b);
	ancestor(a,b);
	return 0;
}
void create(int d)
{
	tmp=(struct tree *)malloc(sizeof(struct tree));
	tmp->d=d;
	tmp->left=tmp->right=NULL;
	if(root==NULL)
	root=tmp;
	else
	{
		tr=root;
		while(tr!=NULL)
		{
			prv=tr;
			if(tmp->d<tr->d)
			tr=tr->left;
			else
			tr=tr->right;
		}
		if(tmp->d<prv->d)
		prv->left=tmp;
		else
		prv->right=tmp;
		}
	}
void ancestor(int a,int b)
{ 
	if((root->d>b && root->d<a) ||  (root->d>a && root->d<b))
	printf("%d",root->d);
	else
	{
		if(root->d>a && root->d>b)
		preorder(root,a,b);
		else
		preorder(root,a,b);
	}
}
void preorder(struct tree *root1,int a,int b)
{
	if(root1!=NULL)
	{
	//	printf("%d",root1->d);
		if(root1->left!=0)
		if(root1->left->d==a || root1->left->d==b)
		{
		printf("%d",root1->d);
		return;}
		if(root1->right!=0)
		if(root1->right->d==a || root1->right->d==b)
		{
			printf("%d",root1->d);
			return;
		}
		preorder(root1->left,a,b);
		preorder(root1->right,a,b);
	}
}
