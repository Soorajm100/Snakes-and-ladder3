
#include <cstdlib>
#include<iostream>

using namespace std;

/*
 * 
 */
int main() {
    int age;
    cout<<"Enter the age of the person:"<<endl;
    cin>>age;
    cout<<"------------------------------------------------------------"<<endl;
    if(age<18)
    {
        cout<<"You are not eligible for voting"<<endl;
        cout<<"Strict orders from government"<<endl;
        
    }
    else
    {
        cout<<"You are eligible for voting"<<endl;
    cout<<"You could easily go and vote"<<endl;
    }
    return 0;
}
