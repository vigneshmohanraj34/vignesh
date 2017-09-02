import java.util.*;

class reversestring {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		ArrayList<String> word=new ArrayList<String>(Arrays.asList(s.nextLine().split(" ")));
		Collections.reverse(word);
		System.out.print(word);
}}
