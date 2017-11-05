#include<stdio.h>
struct tree
{
int d;
struct tree *l;
struct tree *r;
}*r,*t,*t1,*k;
struct stack
{
struct tree *tree1;
struct stack *next;
}*top,*t3,*top2;
void create(int d);
void zig(struct tree *h);
void push(struct tree *);
void push1(struct tree *);
struct tree* pop();
struct tree* pop1();
void inor(struct tree *);
void main()
{
int i,n,u;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&u);
create(u);
}
zig(r);
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
void push(struct tree *t12)
{
t3=(struct stack*)malloc(sizeof(struct stack));
t3->tree1=t12;
t3->next=NULL;
if(top==NULL)
top=t3;
else
{
t3->next=top;
top=t3;
}}
void push1(struct tree *t12)
{
t3=(struct stack*)malloc(sizeof(struct stack));
t3->tree1=t12;
t3->next=NULL;
if(top2==NULL)
top2=t3;
else
{
t3->next=top2;
top2=t3;
}}
struct tree* pop()
{
if(top==NULL)
t=NULL;
else
{
t3=top;
t=t3->tree1;
top=top->next;
free(t3);
}
return t;
}
struct tree* pop1()
{
if(top2==NULL)
t=NULL;
else
{
t3=top2;
t=t3->tree1;
top2=top2->next;
free(t3);
}
return t;
}
void zig(struct tree* tre)
{
push(tre);
while(top!=NULL || top2!=NULL)
{
t=pop();
while(t!=NULL)
{
printf("%d->",t->d);
if(t->l!=NULL)
push1(t->l);
if(t->r!=NULL)
push1(t->r);
t=pop();
}
t=pop1();
while(t!=NULL)
{
printf("%d->",t->d);
if(t->r!=NULL)
push(t->r);
if(t->l!=NULL)
push(t->l);
t=pop1();
}
}
printf("NULL");
}


