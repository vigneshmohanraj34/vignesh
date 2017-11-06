#include<stdio.h>
int count;
struct list
{
int d;
struct list*link;
}*h,*q,*t;
void create(int d);
void print();
int main()
{
int i,n,u;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&u);
create(u);
}
print();
return(0);
}
void create(int d)
{
t=(struct list *)malloc(sizeof(struct list));
t->d=d;
t->link=NULL;
if(h==NULL)
{
count=1;
h=t;
}
else
{
count++;
q=h;
while(q->link!=NULL)
q=q->link;
q->link=t;
}}
void print()
{
int i=(count/2)+1,j=0;
q=h;
while(q!=NULL)
{
j++;
if(j==i)
{
printf("THE MIDDLE ELEMENT OF LIST IS=%d",q->d);
break;
}
q=q->link;
}
}
