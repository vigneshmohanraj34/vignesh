import java.util.Scanner;
class choc {
    public static String chocolate(int m,int n)
    {
        if(m==0 || n==0)
        return "enter the validate rows and column";
        else
        return ((m*n)-1)+"";
        
    }
	public static void main (String[] args) {
Scanner s=new Scanner(System.in);
System.out.println("enter the no of rows and columns in chocolate:");
int a=s.nextInt();
int b=s.nextInt();
System.out.print(chocolate(a,b));


	}
}
