#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={{1,2,3},{4,5,6},{3,5,6}};
    int b[3][3]={{8,7,3},{5,6,0},{5,6,8}};
    int c[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=0;
            for(int k=0;k<=3;k++)
            {
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    //displaying mul
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}