package time.year;
import java.util.Scanner;
public class TimeYear{
public static void main(String[] args){
System.out.println("Enter the number of minutes=");
int n;
Scanner sc=new Scanner(System.in);
n=sc.nextInt();
int m,y,h,d;
y=n/(60*24*365);
d=(n/(60*24))%(y*365);
System.out.println("the number of years="+y);
System.out.println("the number od days available"+d);
}
}
