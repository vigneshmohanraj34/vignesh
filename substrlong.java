import java.util.*;
class substrlong
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
int n=s.nextInt(),l=0,k=0;
String strs[]=new String[n];
s.nextLine();
strs[0]=s.nextLine();
l=strs[0].length();
for(int i=1;i<n;i++)
{
strs[i]=s.nextLine();
if(strs[i].length()<l)
{
String t=strs[i];
strs[i]=strs[0];
strs[0]=t;
}
}
for(int i=strs[0].length()-1;i>=0;i--)
{
String s1=strs[0].substring(0,i+1);
for(int j=1;j<n;j++)
{
if(strs[j].substring(0,i+1).equals(s1))
{
k=1;
System.out.print(s1);
break;
}}
if(k==1)
break;
}
if(k==0)
System.out.print("No common prefis in given strings");
}}
