#include <cstdlib>

#include<iostream>

using namespace std;

/*
 * 
 */
int main() {
    
    int a[20],n;
    cout<<"Enter the no of elements of the array="<<endl;
    cin>>n;
    cout<<"Enter the elements of the array="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The elements of the array="<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<*(a+i)<<" ";
    }
    

    return 0;
}

