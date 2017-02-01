import java.util.*;

class fact {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		int s1=s.nextInt(),s2=1;
		for(int i=1;i<=s1;i++)
		s2=i*s2;
		System.out.print(s2);
	}
}
