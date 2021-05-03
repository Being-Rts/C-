#include<iostream>
using namespace std;
int main()
{
    char s[20];
    cout<<"Enter Your Name  ";
    cin.getline(s,20);
    cout<<"Hi "<<s<<endl; //This will take complete if size is <=19
    cout<<"Enter your City  ";
    cin.getline(s,20);
    cout<<"You live in  "<<s<<endl;
}   