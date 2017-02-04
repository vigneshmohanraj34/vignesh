#include <stdio.h>
#include<string.h>
int main() {
	char a[10],a1[10],s2;
	int i,k,a2=0,k1;
	scanf("%s%s",a,a1);
	k=strlen(a);
	for(i=0;i<=k;i++)
	{
	    if(i==k && a2==0)
	    {
	        a2=1;
	        i=-1;
	        k=strlen(a1)-1;
	        printf(" ");
	    }
	    else
	    if((i<strlen(a1))&&(a2==1))
         {
             k1=(int)tolower(a1[i])+10;
             printf("%c",(i==0 || i==k)?a1[i]:(k1>122)?(k1%122)+96:k1);}
	    else
	    printf("%c",((int)a[i]+10));
	    }
	return 0;
}
