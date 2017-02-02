#include <stdio.h>
    int main() {
    	int a,b,k=0,i;
    	scanf("%d%d",&a,&b);
    	for(i=0;i<=b;i++)
    	 if((i*a)==b)
    	    k=1;
         if(k==0)
    	printf("Co Prime");
    	else
    	printf("not");
    	return 0;
}
