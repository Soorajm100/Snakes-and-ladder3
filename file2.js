package kalnayak;
import java.util.Scanner;
import java.io.*;


 class Kalnayak {

    
    public static void main(String[] args) {
        int [][]m1=new int [3][3];
        int [][]m2=new int [3][3];
        int [][]sum=new int [3][3];
        int [][]mul=new int [3][3];
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the elemements of the first matrix=");
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  m1[i][j]=sc.nextInt();
                  
              }
          }
          System.out.println("Enter the elemements of the second matrix=");
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  m2[i][j]=sc.nextInt();
                  
              }
          }
          
       
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  sum[i][j]=m1[i][j]+m2[i][j];
                  
                  
              }
          }
          
      
          
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                 for(int k=0;k<3;k++){
                     mul[i][j]=m1[i][k]*m2[k][j];
                 }
                  
              }
          }
          System.out.println("the sum of two  matrices=");
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  System.out.print(sum[i][j]+ " ");
                  
                  
              }
              System.out.println();
          }
          System.out.println("the multiplication of two matrices");
          for(int i=0;i<3;i++){
              for(int j=0;j<3;j++){
                  System.out.print(mul[i][j]+" ");
                  
              }
              System.out.println();
          }
          
          
          
          
    }
    
}
