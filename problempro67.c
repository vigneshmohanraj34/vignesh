#include <stdio.h>
int main() {
	int n,f,i,k=0;
	char s[30];
	scanf("%d%d",&n,&f);
	int a;
	scanf("%s",s);
	for(i=0;i<f;i++)
	{
	scanf("%d",&a);
	if(s[a-1]=='0')
	{
	k=1;
	break;
	}}
	if(k==1)
	printf("Yes");
	else
	printf("No");
	return 0;
}
