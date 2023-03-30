#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char *s;
    cout<<" Enter "<<endl;
    cin.getline(s,100);
    cout<<strlen(s)<<endl;
}