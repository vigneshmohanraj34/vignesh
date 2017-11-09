import java.util.*;
class dictionatr
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
TreeSet<String> redu=new TreeSet<String>();
for(;;)
{
String str=s.nextLine().toLowerCase().replaceAll("0","o");
int l=str.length()-str.replaceAll("eof","").length();
str=str.replaceAll("eof","");
str=str.replaceAll("[^a-z, ]","");
redu.addAll(Arrays.asList(str.split(" ")));
if(l>=1)
break;}
ArrayList<String> al=new ArrayList<String>(redu);
for(int i=0;i<al.size();i++)
if(!al.get(i).equals(""))
System.out.println(al.get(i));
}}

