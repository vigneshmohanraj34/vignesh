 #include <stdio.h>
 #include<math.h>
 int main() {
     static int a,i,n;
     scanf("%d%d",&a,&n);
for(i=a+1;i<n;i++)
    if(i%2==0)
    printf("%i ",i);
     return 0;
}
