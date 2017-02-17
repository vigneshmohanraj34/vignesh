#include <stdio.h>

int main() {
   int a[10],i,n,j,k=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
      if(a[i]!=-1)
      for(j=0;j<n;j++)
      {    
          if(a[j]!=10000)            
           if(a[i]==a[j])
           {
            k++;
              if(k==2)
              {
                a[i]=10000;       //element is occur two times it assign 10000;
                a[j]=10000;
              break;
             }}
      }
      if(k==1)
      {
   printf("%d",a[i]); // elements is occur is one time tostop process and print output.
    break;
   }
k=0;     
}
	return;
}
