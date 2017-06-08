import java.util.*;

class jump {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
int b=s.next();
		int a[]=new int[b],i=0;
		for(i=0;i<b;i++)
		a[i]=s.nextInt();
		for(i=0;i<=a.length-2;)
		{
		    if(a[i]==0)
		    break;
		    i=i+a[i];
		}
		if(i<=a.length-1)
		{
		if(a[i]==a[a.length-1])
		System.out.print("true");
		else
		System.out.print("false");
		}
		else
		System.out.print("false");
		
	}
}
