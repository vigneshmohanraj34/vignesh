#include <stdio.h>
#include<math.h>
struct square
{
    int x1,y1;
}a,b,c,d;
int main() {
    int k;
scanf("%d%d%d%d%d%d%d%d",&a.x1,&a.y1,&b.x1,&b.y1,&c.x1,&c.y1,&d.x1,&d.y1);
k=a.x1;
a.x1=abs(a.x1-b.x1)+abs(a.y1-b.y1);
b.x1=abs(b.x1-c.x1)+abs(b.y1-c.y1);
c.x1=abs(c.x1-d.x1)+abs(c.y1-d.y1);
d.x1=abs(d.x1-k)+abs(d.y1-a.y1);
if((a.x1==b.x1)&&(a.x1 == c.x1)&&(a.x1== d.x1)&&(b.x1==c.x1)&&(b.x1==d.x1)&&(c.x1==d.x1))
printf("square");
else
printf("not square");
	return 0;
}
