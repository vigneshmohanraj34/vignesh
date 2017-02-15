#include <stdio.h>
int a[10];
void unique();
int main() {
	int n;
	scanf("%d",&n);
	unique(n);
	return 0;
}
void unique(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%i",&a[i]);
        if(i==a[i])
        printf("%i\n",a[i]);
    }
}
