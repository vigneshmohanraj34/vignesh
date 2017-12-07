import java.util.*;
class coingame
{
public static void main(String arg[])
{
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int coin=0,player1=0,player2=0;
for(int i=0;i<n;i++)
{
coin=s.nextInt();
if(i%2==0)
player1+=coin;
else
player2+=coin;
}
if(player1>player2)
System.out.print("player1 is win");
else if(player1==player2)
System.out.print("match die");
else
System.out.print("player2 is win");
}}
