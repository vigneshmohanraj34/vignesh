 #include <stdio.h>
 #include<math.h>
 int main() {
     static int a;
     scanf("%d",&a);
     a=abs(a);
 if((a==2 ||a==3 ||a==5))
 printf("prime");
 else if((a%2!=0)&&(a%3!=0)&&(a%5!=0))
 printf("prime");
     else
     printf("not prime");
	return 0;
}
