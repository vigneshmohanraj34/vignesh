#include<stdio.h>
void insert(char);
void insert1(char);
void check(struct node*,struct node*);
struct node
{
char r;
struct node *next;
}*h,*h1,*q,*tmp,*q1;
main()
{
char f[100];
int i=0;
scanf("%s",f);
for(i=0;i<strlen(f);i++)
insert(f[i]);
for(i=strlen(f)-1;i>=0;i--)
insert1(f[i]);
check(h,h1);
return 0;
}
void insert(char r)
{
tmp=(struct node*)malloc(sizeof(struct node));
tmp->r=r;
tmp->next=NULL;
if(h==NULL)
h=tmp;
else
{
q=h;
while(q->next!=NULL)
q=q->next;
q->next=tmp;
}}
void insert1(char r)
{
tmp=(struct node*)malloc(sizeof(struct node));
tmp->r=r;
tmp->next=NULL;
if(h1==NULL)
h1=tmp;
else
{
q=h1;
while(q->next!=NULL)
q=q->next;
q->next=tmp;
}}
void check(struct node *h,struct node *h1)
{
q=h;
q1=h1;
while(q->next!=NULL && q1->next!=NULL)
{
if(q->r!=q1->r)
break;
q=q->next;
q1=q1->next;
}
if(q->next==NULL && q1->next==NULL)
if(q->r==q1->r)
printf("given string palindrome");
else
printf(" given string is not palindrome");
else
printf("given string is not palindrome");
}
