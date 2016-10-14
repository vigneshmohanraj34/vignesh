#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
char c[30],c1[10];
static int a[28],a1[28],i,j,b,k,k1,z,e=6,u,c2[5];
for(i=0;i<=5;i++)
c2[i]=(i+1);
for(i=0;i<=5;i++)
printf("%i",c2[i]);
printf("                        SKYPIE SOFTWARE\n");
printf("******************************************************************\n");
printf("ENTER THE FIRST NAME  :");
gets(c);
printf("ENTER THE SECOND NAME :");
gets(c1);
printf("__________________________________________________________________\n");
printf("                            RESULT \n");
printf("\n\n\n\n");
printf("  THE RELATION IS     :");
for(i=0;i<strlen(c);i++)
++a[((int)(c[i]))-65];
for(j=0;j<strlen(c1);j++)
++a1[((int)((c1[j])))-65];
for(i=0;i<26;i++)
if((a[i]!=0)&&(a1[i]!=0))
{
if(a[i]>a1[i])
b=a[i]-a1[i];
else
b=a1[i]-a[i];
k=b+k;
}
else
k1=a[i]+a1[i]+k1;
k1=k1+k;
for(j=0;j<5;j++)
{
for(i=1;i<=k1;i++)
{
if(z==e)
z=0;
z++;
}
z--;
for(u=z;u<=e;u++)
c2[u]=c2[u+1];
e--;
}
if(c2[0]==1)
printf("FRIEND");
if(c2[0]==2)
printf("LOVE");
if(c2[0]==3)
printf("NOT FOR FRIEND,LOVE,MARRIAGE,ENEMY,SISTER");
if(c2[0]==4)
printf("MARRIAGE");
if(c2[0]==5)
printf("ENEMY");
if(c2[0]==6)
printf("SISTER");
printf("\n\n\n\n\n\n\n\n\n");
printf("__________________________________________________________________\n");
printf("                                                   CREATED BY\n");
printf("                                                    MOHANRAJ.R\n");
getch();
return (0);
}

