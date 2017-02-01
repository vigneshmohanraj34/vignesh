#include <stdio.h>
#include<string.h>
int main() {
    char s[10];
    int i,k1=0;
    scanf("%s",s);
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]=='I')
        k1=k1+1;
        else if(s[i]=='V')
        k1=k1+5;
        else if(s[i]=='X')
        k1=k1+10;
        else if(s[i]=='L')
        k1=k1+50;
        else if(s[i]=='C')
        k1=k1+100;
        else if(s[i]=='M')
        k1=k1+1000;
        }
    
    printf("%d",k1);
    return(0);
}
