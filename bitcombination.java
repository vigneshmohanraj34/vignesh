import java.util.Arrays;
import java.util.Scanner;
public class HelloWorld{
public static void main(String []args){
         Scanner s=new Scanner(System.in);
        int k=s.nextInt();
        String value[]=new String[(int)Math.pow(2,k)];
        Arrays.setAll(value,i->(Integer.toBinaryString(i).replaceAll("0","").length()+Integer.toBinaryString(i)));
        Arrays.sort(value);
        Arrays.setAll(value,i->(value[i].substring(1,value[i].length())));
        Arrays.setAll(value,i->String.format("%"+k+"s",value[i]).replaceAll(" ","0"));
      System.out.print(String.join(",", Arrays.asList(value)));
     }}
