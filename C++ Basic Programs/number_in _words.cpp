#include<iostream>
using namespace std;
int main()
{
    int rev=0,n,m,digit;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while(n)
    {
        m=n%10;
        n=n/10;
        rev=rev*10+m;
    }
    cout<<rev;
    while(rev)
    {
        digit=n%2;
        rev=rev/10;
        switch (digit)
        {
        case 1:
            cout<<"One";
            break;
        case 2:
            cout<<"Two";
            break;
        case 3:
            cout<<"Three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"Five";
            break;
        case 6:
            cout<<"Six";
            break;
        case 7:
            cout<<"Seven";
            break;
        case 8:
            cout<<"Eight";
            break;
        case 9:
            cout<<"Nine";
            break;
        default:
            break;
        }
    }
}