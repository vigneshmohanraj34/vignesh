import java.util.*;
class arraysubset {
	public static void main (String[] args) {
		check();
	    }	
	    static void check()
		{
		Scanner s=new Scanner(System.in);
		ArrayList<String> a1=new ArrayList<String>(Arrays.asList(s.nextLine().split(" ")));
		ArrayList<String> a2=new ArrayList<String>(Arrays.asList(s.nextLine().split(" ")));
		if(a2.containsAll(a1))
		System.out.print("Yes a1 is subset of a2");
		else
		System.out.print("No a1 is not subset of a2");
		}}
