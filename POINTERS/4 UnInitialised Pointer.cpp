//Uninitialised pointer
#include<iostream>
using namespace std;
int main()
{
int *p;
*p=30; //Trying to access memory which is not Initialised (Segmentation Fault)
}