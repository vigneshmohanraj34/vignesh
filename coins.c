#include <stdio.h>

int main() {
	int s,j,a;
	printf("enter the amount:");
	scanf("%d",&a);
	if(a<=2)
	s=a;
	else if(a>=3 && a<5)
	s=a%3+a/3;
	else
	{
	    s=a/5;
	    j=a%5;
	    printf("%d",j);
	    if(j>=3)
	    s=s+(j%3)+(j/3);
	    else
	    s=s+j;
	}
	printf("count=%d",s);
	return 0;
}
