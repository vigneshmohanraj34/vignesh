#include <stdio.h>
int main() {
     static int i,a,sum;
     scanf("%i",&a);
     for(i=1;i<=a;i++)
     sum=i+sum;
     printf("%i",sum);
	return 0;
}
