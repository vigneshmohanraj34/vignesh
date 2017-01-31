#include <stdio.h>
#include<ctype.h>
int main() {
	char a;
	printf("enter the character:");
	scanf("%c",&a);
	if(isalpha(a))
	printf("alphabet");
	else
	printf("not");
	return 0;
}
