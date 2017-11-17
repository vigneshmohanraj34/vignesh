#include<stdio.h>
int noof=0;
struct tree
{
int d;
struct tree *l;
struct tree *r;
}*r=NULL,*t;
struct que
{
struct tree * t3;
struct que *link;
}*front,*rear,*tmp;
void height(struct tree *);
void enqueue(struct tree *);
struct tree *dequeue();
struct tree* newnode(int m);
main()
{
r=newnode(34);
r->l=newnode(40);
r->r=newnode(80);
r->l->l=newnode(90);
r->l->r=newnode(30);
r->r->l=newnode(999);
r->r->r=newnode(56);
r->r->r->l=newnode(4567);
height(r);
return(0);
}
struct tree* newnode(int m)
{
t=(struct tree*)malloc(sizeof(struct tree));
t->d=m;
t->l=t->r=NULL;
return t;
}
void enqueue(struct tree *t1)
{
tmp=(struct que*)malloc(sizeof(struct que));
tmp->t3=t1;
tmp->link=NULL;
if(rear==NULL)
{
rear=front=tmp;
noof++;
}
else
{
rear->link=tmp;
rear=tmp;
noof++;
}}
struct tree* dequeue()
{
if(front->link==NULL)
{
t=front->t3;
free(front);
front=rear=NULL;
noof--;
return t;
}
else
{
tmp=front;
front=front->link;
t=tmp->t3;
free(tmp);
noof--;
return t;
}}
void height(struct tree * t2)
{
int count=0;
if(t2!=NULL)
{
enqueue(t2);
while(1)
{
if(front==NULL)
break;
else
{
int z=0;
while(z<noof)
{
t=dequeue();
if(t->l!=NULL)
enqueue(t->l);
if(t->r!=NULL)
enqueue(t->r);
z++;
}}
count++;
}}
printf(" HEIGHT OF TREE IS=%d",count);
}
