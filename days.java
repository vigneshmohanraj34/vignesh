import java.util.*;
public class days{
public static void main(String []args){
        Scanner s=new Scanner(System.in);
        String days[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
        String day=s.nextLine().toLowerCase(),ans="";
        String year=s.nextLine().toLowerCase();
        int pos=Arrays.asList(days).indexOf(day),end=7;
        if(year.equals("leapyear"))
        {
            end=6;
        pos=pos+1;
        }
        int check=pos;
        for(int i=0;i<end;i++)
        {
            if(i%2==0)
            {
                if(check>=7)
                check=check%7;
                ans=ans+days[check]+",";
            }
            check++;}
    System.out.print(ans.substring(0,ans.length()-1));}}
