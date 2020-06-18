#include <cstdlib>

#include<iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int a[100],n,count=0,j=0,sum=0,b[100];
    int i,h;
    cout<<"Enter the number="<<endl;
    cin>>n;
    for( i=2;i<=n;i++)
    {
        for( h=2;h<i;h++){
        if(i%h==0&&h<i)
        {
            count++;
          
         }
        
        }   
        if(count==0)
        {
           
            count=0;
            b[j]=i;
            j++;
            
            
        }
        else
        {
           
            count=0;
        }
        count=0;
        
        
    }
    for(int h=0;h<j;h++)
    {
        cout<<b[h]<<" ";
        
    }
    cout<<endl;
    for(int k=0;k<j/2+2;k++)
    {
        for(int m=0;m<j;m++)
        {   
                   sum=b[k]+b[m];
        
         if(sum==n)
        {
            cout<<n<<"="<<b[k]<<"+"<<b[m]<<endl;
        }
            
            
        }

    }
    return 0;
}
