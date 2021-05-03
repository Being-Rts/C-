#include<iostream>
using namespace std;
int main()
{
    char name,yob,age,p,c;
    cout<<"Please enter Your name"<<endl;
    cin>>name;
    cout<<"Please create your Password"<<endl;
    cin>>p;
    cout<<"Confirm Password" <<endl;
    cin>>c;
    cout<<":) You are Done "<<endl;
    if(c==p)
        {
        cout<<"Hi " <<name<<" welcome to future"<<endl;
        cout<<"Enter your Year of Birth"<<endl;
        cin>>yob;
        age=2020-yob;
        cout<<"You are"<< age <<" year old";
        }
    else
        {
        cout<<"Password does not match";
        }
}