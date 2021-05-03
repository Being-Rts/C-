#include<iostream>
using namespace std;
/* If the function name is same but Number of Parameters or Data type is different
   then it is called FUNCTION OVERLOADING.

   e.g. int add(int,int ), float add(float float)------are same name different Data types.(both are diffr)
   e.g  int ad(int,int) &  int ad(int,int,int) --------same name but no. of parameters are diff.(both are diffr)
   e.g int max(int,int) & float max(int,int) ---------same name same data type....(both are not different) 
    return type can not be overloaded
*/
int max (int a,int b)
{
  if (a>b)
  return a;
  else 
  return b;
}
int max(float as, float b)
{
  if (a>b)
  return a;
  else
  return b;
  
}
int main()
{
  int x,y;
  cout<<"Enter two numbers";
  cin>>x>>y;

  max(x,y);
}