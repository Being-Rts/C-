#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[50];
    cout<<"Enter name ";
    cin.get(s,50);
    //cin.getline(s,50); // Both works same 
    cout<<s;
}