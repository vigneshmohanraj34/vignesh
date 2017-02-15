#include <stdio.h>
int main() {
static long int a[10],k3;
static int n,i,a1,b,k,j;
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%li",&a[i]);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
        if(a[i]>a[j])               //sort the element             
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
            }
for(i=0;i<n;i++)
{
a1=i+1;
b=n-1;                           //perform searching for o(nlogn)
k=(a1+b)/2;
if(a[i]!=k3)
while((a1<=b)&&(a1>i))
{
if(a[i]<a[k])
b=k-1;
else if((a[k]==a[i]))
{
printf("\nduplicate=%li",a[i]);
k3=a[i];
break;
}
else
a1=k+1;
k=((a1+b)/2);
}
if((k3==0)&&(i==n-1))
printf("no duplicate");
}
return 0;
}
