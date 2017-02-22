#include<stdio.h>
static int a[20],b[20],i,k,k1,j,n;
void sort(int);
main()
{
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
sort(1);
for(i=0;i<n;i++)
{
k1=0;
k=a[i];
while(k>0)
{
if(k%2==1)
k1++;
k=k/2;
}
b[i]=k1;
}
sort(0);
printf("\n");
for(i=n-1;i>=0;i--)
printf("%d\n",a[i]);
return(0);
}
void sort(int l)
{
for(i=0;i<n;i++)
{
k=b[i];
k1=a[i];
if(l==1)
k=k1;
for(j=i;j>0 && ((l==1)?a[j-1]:b[j-1])>k;j--)
{
a[j]=a[j-1];
if(l==0)
b[j]=b[j-1];
}
a[j]=k1;
if(l==0)
b[j]=k;
}}
