
package prime;
import java.util.Scanner;
public class Prime {

   
    public static void main(String[] args) {
        
        int n1,n2,n3,n;
        n1=0;
        n2=1;
        
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter the number of elements=");
       n=sc.nextInt();
       n=n-2;
       System.out.print(n1+","+n2);
       for(int i=0;i<n;i++){
          n3=n1+n2;
          System.out.print(","+n3);
          n1=n2;
          n2=n3;
       }
       
    }
    }
        
