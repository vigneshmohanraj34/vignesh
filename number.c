#include<stdio.h>
#include<conio.h>
void main()
{
long int a;
printf("enter the number:")
scanf("%li",&a);
if(a>=0)
{
if(a==0)
printf("zero");
else
printf("positive");
}
else
printf("negative");
getch();
}
