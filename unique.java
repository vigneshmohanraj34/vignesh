import java.util.*;

class unique{
	public static void main (String[] args) {
	    Scanner s=new Scanner(System.in);
	    int n=s.nextInt(),a[]=new int[n];
	    if(n%2==1)
	    {
	    for(int i=0;i<n;i++)
	    a[i]=s.nextInt();
	    Arrays.sort(a);
	   for(int i=0;i<n;i++)
	       if((i%2==0)&&(i!=n-1))
	       if(a[i]!=a[i+1])
	        {
	            System.out.print(a[i]);
	            break;
	        }
	        else if(i==n-1)
	        System.out.print(a[i]);
	    }
	}
}
