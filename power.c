#include <stdio.h>
#include<math.h>
int main() {
     static int i,n;
     scanf("%i%i",&i,&n);
    n=pow(i,n);
     printf("%i",n);
	return 0;
}
