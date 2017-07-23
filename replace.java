import java.util.*;
public class HelloWorld{
public static void main(String []args){
        Scanner s=new Scanner(System.in);
        System.out.print("enter the no of pair");
        int pair=s.nextInt(),nod=(2*pair)-1,k=0,name[]=new int[2*pair],name1[]=new int[2*pair],j=0;
        Arrays.setAll(name,i->i+1);
        System.arraycopy(name,0,name1,0,name.length);
        while(k<=nod)
        {
            System.out.println("pairs for days"+(k+1));
            j=(2*pair)-1;
            for(int i=0;i<pair;i++)
            {
            System.out.println(name[i]+" "+name[j]);
            j--;
            }
            System.arraycopy(name1,k+1,name,0,name.length-(k+1));
           System.arraycopy(name1,0,name,name.length-(k+1),k+1);
           k++;        
        }}}

