import java.util.*;
class substrab
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
String a=s.nextLine();
String b=s.nextLine();
int k=0;
for(int i=0;i<a.length();i++)
{
for(int j=a.length()-1;j>=i;j--)
{
String str=a.substring(i,j+1);
if(b.replaceAll(str,"").length()!=b.length() && str.length()>1)
{
System.out.print(str);
k=1;
break;
}}
if(k==1)
break;
}
if(k==0)
System.out.print(" not match");
}}
