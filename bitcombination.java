import java.util.*;
public class bitcombination{
public static void main(String []args){
        Scanner s=new Scanner(System.in);
        int k=s.nextInt();
        Integer value[]=new Integer[(int)Math.pow(2,k)];
        Arrays.setAll(value,i->i);
        Arrays.asList(value).forEach(i->System.out.format("%0"+k+"d,",Integer.parseInt(Integer.toBinaryString(i))));
     }}
