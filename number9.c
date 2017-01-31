#include <stdio.h>
int main() {
     static int i,n,sum;
     scanf("%i",&n);
     for(i=0;i<=n;i++)
     sum=i+sum;
     printf("%i",sum);
	return 0;
}
