import java.util.*;

class replaceduplicate {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		LinkedHashSet<String> words=new LinkedHashSet<String>(Arrays.asList(s.nextLine().split("")));
		System.out.print(words.toString().replaceAll("[^a-zA-Z0-9]",""));
	}
}
