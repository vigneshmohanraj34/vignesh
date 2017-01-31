 #include <stdio.h>
 #include<math.h>
 int main() {
     static int a,n2,b;
     scanf("%d",&a);
    a=abs(a);
     b=a;
     while(a>0)
     {
    n2=(n2*10)+(a%10);
    a=a/10;
     }
     if(b== n2)
     printf("palindorme");
     else
     printf("not");
	return 0;
}
