#include <stdio.h>
int main() {
	char a;
	printf("enter the character:");
	scanf("%c",&a);
	if(tolower(a)=='a' || tolower(a)=='e' || tolower(a)=='i' || tolower(a)=='o' || tolower(a)=='u')
	printf("vowel");
	else
	printf("consonant");
	return 0;
}
