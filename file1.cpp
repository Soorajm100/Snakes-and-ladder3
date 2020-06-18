#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main() {
    char c='w';
    int r=5;
    float t=2.5;
    double f=2.3654;
    float h,g,pro;
    cout<<"The size of the char:"<<sizeof(c)<<endl;
    cout<<"The size of the int:"<<sizeof(r)<<endl;
    cout<<"The size of the float:"<<sizeof(t)<<endl;
    cout<<"The size of the double:"<<sizeof(f)<<endl;
    
    cout<<"---------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    cout<<"Enter the first number"<<endl;
    cin>>h;
    cout<<"Enter the second number"<<endl;
    cin>>g;
    
    pro=h*g;
    cout<<"The product of the numbers is="<<pro<<endl;
    
    return 0;
}
