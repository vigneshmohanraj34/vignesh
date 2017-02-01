#include <stdio.h>
#include<math.h>
int main() {
    long int s;
    scanf("%ld",&s);
    if(s<0)
    printf("-");
    s=abs(s);
    if(s==0)
    printf("0");
    else
    while(s>0)
    {
        printf("%ld",(s%10));
        s=s/10;
    }
	
	return 0;
}
