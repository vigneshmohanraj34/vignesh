import java.util.*;
class add1{
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		int a=s.nextInt();
		String a1[]=new String[a],s3="";
		for(int i=0;i<a1.length;i++)
		    a1[i]=s.next();
			Arrays.sort(a1,Collections.reverseOrder());
			String s2=Arrays.toString(a1).replaceAll("\\[|\\]|,|\\s", "");
			if(s2.length()%3!=0)
			{
			s3=s2.substring(0,s2.length()%3);
			s2=s2.substring(s2.length()%3,s2.length());
			}
			for(int i=0;i<s2.length();)
		{
		 s3=(s3.isEmpty())?s2.substring(i,i+3):s3+","+s2.substring(i,i+3);
		 i=i+3;
		}	System.out.print(s3);
	}
}
