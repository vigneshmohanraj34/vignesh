import java.util.*;

class maxmin {
	public static void main (String[] args) {
	    Scanner s=new Scanner(System.in);
	    int k=s.nextInt();
	    int a[]=new int[k];
	    for(int i=0;i<k;i++)
	    a[i]=s.nextInt();
	    Arrays.sort(a);
	    for(int i=0;i<((k%2==0)?k/2:(k/2)+1);i++)
	   if(i==0)
	   System.out.print(a[(a.length-1)-i]+","+a[i]);
	   else
	  if((k%2==1)&&(i==(k/2)))
	   System.out.print(","+a[(a.length-1)-i]);
	   else
	   System.out.print(","+a[(a.length-1)-i]+","+a[i]);
	    
	}
}
