#include <stdio.h>
int main() {
	int a,b,c;
	printf("enter the three number:");
	scanf("%i%i%i",&a,&b,&c);
c=(a>b?(a>c?a:c):(b>c?b:c));
	printf("the bigger of three number is=%d",c);
	return 0;
}
