#include<stdio.h>
struct tree
{
int d;
struct tree *l;
struct tree *r;
}*r,*t,*t1,*k;
void create(int d);
void cmirror(struct tree *);
void preorder(struct tree *);
int main()
{
int i,n,u;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&u);
create(u);
}
cmirror(r);
printf("\nmirror image of tree in preorder\n");
preorder(r);
printf("NULL");
return 0;
}
void create(int d)
{
t=(struct tree*)malloc(sizeof(struct tree));
t->d=d;
t->l=t->r=NULL;
if(r==NULL)
r=t;
else
{
t1=r;
while(t1!=NULL)
{
k=t1;
if(t->d<t1->d)
t1=t1->l;
else
t1=t1->r;
}
if(t->d<k->d)
k->l=t;
else
k->r=t;
}}
void cmirror(struct tree *tre)
{
if(tre!=NULL)
{
t=tre->l;
tre->l=tre->r;
tre->r=t;
cmirror(tre->l);
cmirror(tre->r);
}
}
void preorder(struct tree *tre)
{
if(tre!=NULL)
{
printf("%d->",tre->d);
preorder(tre->l);
preorder(tre->r);
}
}
