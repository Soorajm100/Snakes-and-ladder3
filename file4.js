
package switchcase;
import java.util.Scanner;
import java.io.*;
public class Switchcase {

    
    public static void main(String[] args) {
        System.out.println("Enter 1 for hi");
        System.out.println("Enter 2 for hey");
       System.out.println("Enter 3 for hello");
       int choice;
       Scanner sc=new Scanner(System.in);
       System.out.println("Enter the choice=");
       choice=sc.nextInt();
       switch(choice){
           case 1:System.out.println("hi");
                   break;
            case 2:System.out.println("hey");
                   break;
            case 3:System.out.println("hello");
                   break;
            default:System.out.println("invalid choice");
       }
    }
    
}

