#include <stdio.h>
    int main() {
    	int a,j,i;
    	scanf("%d",&a);
    	for( i=a;i>0;i--)
    	{
    	    for(j=(a*2);j>0;j--)
    		{
    		if(j==i)
    		printf(" ");
    		printf("*");
    		}
    		printf("\n");
    		a--;
    	}
    	return 0;
}
