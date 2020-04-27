package prime;
import java.util.Scanner;
public class Prime {

   
    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        int n,l=0;
        System.out.println("Enter the number=");
        n=sc.nextInt();
        for(int i=1;i<=n;i++){
            if(n%i==0){
                l++;
            }
            }
        if (l>2)
            System.out.println("The "+n+" is not prime");
         else
            System.out.println("The "+n+" is prime ");
            
        
    }
    
}
