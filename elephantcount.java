import java.util.*;
class elephantcount
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
int noele=s.nextInt();
int masu=s.nextInt();
int elew[]=new int[noele],k=0,z1=0,z2=0,z=0,l=0,z8=0;
for(int i=0;i<noele;i++)
elew[i]=s.nextInt();
for(int q=0;q<noele;q++)
{
for(int i=q;i<noele;i++)
{
z8=z8+elew[i];
z2++;
if(z8<=masu)
{
for(int j=i+1;j<noele;j++)
{
z=z+elew[j];
z1++;
if(z+z8>masu)
{
z1--;
break;
}
}
if(z2+z1>l)
l=z2+z1;
}
z1=0;
z=0;
}
z2=0;
z8=0;
}
System.out.print(l);
}}
