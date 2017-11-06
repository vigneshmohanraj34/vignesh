#include<stdio.h>
int main()
{
long int d;
int n,n1,z=0;
scanf("%ld",&d);
  d=abs(d);
if(d%10==d)
printf("%ld is jumping number",d);
else
{
while(d>9)
{
n=d%10;
n1=(d/10)%10;
if(abs(n-n1)!=1)
{
z=1;
break;
}
else
d=d/10;
}
if(z==0)
printf("jumping number");
else
printf("Not jumping number"); }
return 0;
}

