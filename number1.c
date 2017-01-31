#include <stdio.h>
int main() {
	long int a;
	printf("enter the number:");
	scanf("%ld",&a);
	if(a%2==0)
	printf("even");
	else
	printf("odd");
	return 0;
}
