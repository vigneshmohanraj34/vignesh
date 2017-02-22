#include<stdio.h>
int min(int,int,int);
static int m[10][10],i,j,maxi,maxj;
void matrix(int,int,int);
main()
{
int ms,n,n1;
scanf("%d%d",&n,&n1);
matrix(n,n1,0);
ms=m[0][0];
for(i=0;i<n;i++)
for(j=0;j<n1;j++)
{
if((i>=1)&&(j>=1))
if(m[i][j]==1)
m[i][j]=min(m[i][j-1],m[i-1][j],m[i-1][j-1])+1;
else
m[i][j]=0;
if(ms<m[i][j])
{
ms=m[i][j];
maxi=i;
maxj=j;
}}
matrix(ms,ms,1);
return(0);
}
int min(int a,int b,int c)
{
int m=a;
if(m>b)
m=b;
if(m>c)
m=c;
return(m);
}
void matrix(int a,int b,int k)
{
  if(k==1)
    printf("the maximum square sub matrixes with all 1 bits is from (%d,%d) to (%d,%d)\n",(a-maxj),(a-maxi),maxi,maxj);
for(i=0;i<a;i++)
{
for(j=0;j<b;j++)
{
if(k==0)
scanf("%d",&m[i][j]);
else
printf("1 ");
}
if(k==1)
printf("\n");
}}
