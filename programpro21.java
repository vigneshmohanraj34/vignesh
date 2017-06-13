import java.util.*;

class programpro21 {
	public static void main (String[] args)
	{
	    Scanner s=new Scanner(System.in);
	    int b=s.nextInt(),k=0,k1=0,f=0;
	    int a[]=new int[b],y=b-1;
	    String s1="",s2="";
	    for(int i=0;i<b;i++)
	    a[i]=s.nextInt();
	    for(int i=0;i<b;i++)
	    {
	        if(i==b-1)
	        i=b+1;
	        for(int j=b-1;j>=0;j--)
	        {
	            if(j>=y)
	            {
	            k=a[j]+k;
	            s1=(j!=b-1)?a[j]+","+s1:a[j]+s1;
	            }
	            else
	            {
	            k1=k1+a[j];
	            s2=(j!=y-1)?a[j]+","+s2:a[j]+s2;
	            }
	            if(j==0)
	            if((k/(i+1))==(k1/(b-(i+1))))
	            {
	            System.out.println("["+s2+"],"+"["+s1+"]");
	            f=1;
	        }}
	        if(f==1)
	        break;
	        k=0;k1=0;s1="";s2="";y--; 
	    
	    }
	    if(f!=1)
	    System.out.print("not possible");
	}
}
