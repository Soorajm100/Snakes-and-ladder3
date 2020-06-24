#include <cstdlib>
#include<iostream>



using namespace std;

/*
 * 
 */
class time{
public:int hours;
int minutes;
int seconds;
int totalsec;
public: 
void timy()
{  
    
    cout<<"Enter time:"<<endl;
    cout<<"Hours?=";
    cin>>hours;
    cout<<endl;
    cout<<"Minutes?=";
    cin>>minutes;
    cout<<endl;
    cout<<"Seconds?=";
    cin>>seconds;
    cout<<endl;
    if(hours<=9&&minutes<=9&&seconds<=9)
    {
        cout<<"The time is= "<<"0"<<hours<<":0"<<minutes<<":0"<<seconds;
    }  
     if((hours<=9&&minutes<=9)&&seconds>9)
    {
        cout<<"The time is= "<<"0"<<hours<<":0"<<minutes<<":"<<seconds;
    }
     if(hours<=9&&minutes>9&&seconds<=9)
    {
        cout<<"The time is= "<<"0"<<hours<<":"<<minutes<<":0"<<seconds;
    }
     if(hours>9&&minutes<=9&&seconds<=9)
    {
        cout<<"The time is= "<<hours<<":0"<<minutes<<":0"<<seconds;
    }
     if(hours>9&&minutes>9&&seconds>9)
    {
        cout<<"The time is= "<<hours<<":"<<minutes<<":"<<seconds;
    }
     if(hours>9&&minutes>9&&seconds<=9)
    {
        cout<<"The time is= "<<hours<<":"<<minutes<<":0"<<seconds;
    }
     if(hours<=9&&minutes>9&&seconds>9)
    {
        cout<<"The time is= "<<"0"<<hours<<":"<<minutes<<":"<<seconds;
    }
     if(hours>9&&minutes<=9&&seconds>9)
    {
        cout<<"The time is= "<<hours<<":0"<<minutes<<":"<<seconds;
    }
    
    totalsec=hours*60*60+minutes*60+seconds;
    cout<<endl;
}


void display(){
   
    
    cout<<"Time in total seconds:"<<totalsec<<endl;
    
}
  
};

int main() {
    class time t1;
    t1.timy();
    t1.display();
    return 0;
    
    
    }

