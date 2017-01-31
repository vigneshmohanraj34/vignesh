#include <stdio.h>
#include<math.h>
int main() {
     static int i,n;
     scanf("%i",&n);
    n=abs(n);
     while(n>0)
     {
     n=n/10;
        i++;
        }
     printf("%i",i);
	return 0;
}
