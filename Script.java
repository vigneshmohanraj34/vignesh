import java.util.*;
class Script
{
public static void main(String arg[])
    {
        Scanner s=new Scanner(System.in);
        String a=s.next();
        int k1=s.nextInt();
        int a1[]=new int[a.length()];
        for(int i=0;i<a.length();i++)
        {
            String k=a.substring(i,i+1);
            a1[i]=Integer.parseInt(k);
            }
    Arrays.sort(a1);
    for(int i=0;i<(a.length()-k1);i++)
    System.out.print(a1[i]);
        
    }
}
