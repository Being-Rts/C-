#include<iostream>
using namespace std;
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    int b[2][3]={{8,7,3},{5,6,0}};
    int c[2][3];
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    //displaying sum
    for(int k=0;k<2;k++)
    {
        for(int l=0;l<3;l++)
        {
            cout<<c[k][l]<<" ";
        }
        cout<<endl;
    }

}