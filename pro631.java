import java.util.*;

class pro631 {
	public static void main (String[] args) {
		Scanner s=new Scanner(System.in);
		String h=s.nextLine(),out="";
		for(int i=0;i<h.length();i++)
		{
		    for(int j=h.length()-1;j>=i;j--)
		    {
		        String h1=h.substring(i,j+1);
		        LinkedHashSet<String> al=new LinkedHashSet<String>(Arrays.asList(h1.split("")));
		        if(h1.equals(al.toString().replaceAll("[^a-zA-Z]","")))
		        {
		           if(h1.length()>out.length())
		            out=h1;
		            break;
		        }
		        al.clear();
		    }
		}
		System.out.print(out);
	}
}
