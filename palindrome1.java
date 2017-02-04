import java.util.*;
class palindrome1 {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		String s1=s.next(),s6="",s3="";
		for(int i=0;i<=s1.length()-1;i++)
	    s3=s1.substring(i,i+1)+s3;
		for(int i=0;i<s1.length();i++)
		 for(int j=i+1;j<=s1.length();j++)
		  if(s1.substring(i,j).equals(s3.substring(s3.length()-j,s3.length()-i)))
		 if(s1.substring(i,j).length()>s6.length())
		 s6=s1.substring(i,j);
	System.out.println(s6);
		}}
