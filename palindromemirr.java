import java.util.*;
class palindromemirr
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
for(;;)
{
String h=s.nextLine().replaceAll("0","o");
int l=h.length()-h.replaceAll("EOF","").length(),i=0;
h=h.replaceAll("EOF","");
String h1="AEHIJLMOSTUVWYZ12358";
String h2="A3HILJMO2TUVWY51SEZ8";
int y=0;
StringBuffer str=new StringBuffer(h);
if(new String(str.reverse()).equals(h))
y++;
for(i=0;i<h.length();i++)
{
if(!h1.contains(h.substring(i,i+1)))
break;
else if(!h.contains(h2.charAt(h1.indexOf(h.substring(i,i+1)))+""))
break;
}
if(y==1)
{
if(i==h.length())
System.out.println(h+"  is a mirrored palindrome");
else
System.out.println(h+" is a palindrome");
}
else
{
if(i==h.length())
System.out.println(h+"  is a mirrored string");
else
System.out.println(h+"  is not a palindrome");
}
System.out.println();
if(l>=1)
break;}
}}

