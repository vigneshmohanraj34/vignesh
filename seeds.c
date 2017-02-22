#include<stdio.h>
 main()
{
static int x,y,k1;
scanf("%d%d",&x,&y);
k1=x;
if(k1%10==k1)
k1=k1*k1;
else
while(x>0)
{
k1=(x%10)*k1;
x=x/10;
}
(k1==y)?printf("Now given a number find all its seed"):printf("Now given a number is NOT all its seed");
return(0);
}
