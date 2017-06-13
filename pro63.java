import java.util.*;

class GFG {
	public static void main (String[] args)
	{
	    Scanner s=new Scanner(System.in);
	    String s1=s.nextLine();
	    if(s1.length()<26)
	    System.out.print("not pangram");
	    else
	    {
	    Set<Character> set = new HashSet<Character>();
	    for(int i=0;i<s1.length();i++)
	    set.add(s1.charAt(i));
	    if(set.size()==26)
	    System.out.print("pangram");
	    else
	    System.out.print("not pangram");
	    }
	}
}
