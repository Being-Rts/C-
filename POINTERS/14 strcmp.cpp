#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[20],p[20];
    cout<<"Enter First String ";
    cin.getline(s,20);
    cout<<"Enter second String ";
    cin.getline(p,20);
    cout<<strcmp(s,p)<<endl;
    // +ve -> First is greater
    //0    -> Both are same
    // -ve -> Second is greater
}   