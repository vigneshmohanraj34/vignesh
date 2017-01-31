 #include <stdio.h>
 #include<math.h>
 int main() {
     static int a;
     scanf("%d",&a);
if(a==1)
printf("compound number");
else
 if(((a%2!=0)&&(a%3!=0)&&(a%5!=0))||(a==2 ||a==3 ||a==5))
    printf("prime");
     else
     printf("not");
	return 0;
}
