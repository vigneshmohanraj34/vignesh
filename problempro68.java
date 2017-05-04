import java.util.*;

class problempro68 {
	public static void main (String[] args) {
		Scanner s1=new Scanner(System.in);
		String l=s1.next(),s=s1.next(),pin=s1.next(),t="";
		int n=s1.nextInt();
		if(s.length()>l.length())
		{
		t=l;
		l=s;
		s=t;
		}
		else if(s.length()==l.length())
		{
		  if(l.compareTo(s)<0)
		  {
		      t=l;
		      l=s;
		      s=t;
		  }}
		t="";
		  s=l.substring(0,1)+s;
		  for(int i=0;i<s.length();i++)
		  {
		 char c=s.charAt(i);     
		 if(Character.isUpperCase(c))
		 t=t+Character.toLowerCase(c);
		 else
		 t=t+Character.toUpperCase(c);
		  }
		  int k2=((pin.length()-1)-(n-1));
		  System.out.println(t+pin.substring(n-1,n)+pin.substring(k2,k2+1));
		      
		  }}
		
		
