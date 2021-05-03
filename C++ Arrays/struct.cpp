#include <iostream>
using namespace std;
class Stack
{
public:
    int tos;
    int A[tos];
    void push(int);
    void pop(int);
};
void Stack::push(int a)
{

    A[tos++] = a;
}
void Stack::pop(int a)
{
    --tos;
}
int main()
{
    Stack S;
    S.push(6);
    S.push(5);
}