#include <stdio.h>
int main() {
    int n,a[10],i,j;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%i",&a[i]);
	for(i=0;i<n;i++)
     	for(j=i+1;j<n;j++)
	        if(a[i]==a[j])
	        {
	        printf("%i",a[i]);
	       i=n;
	        break;
	        }
	return 0;
}
