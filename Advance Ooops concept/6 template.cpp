#include <iostream>
using namespace std;
template <class T>
class stack
{
private:
    int T *stk;
    int top, size;

public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new T[size];
    }
    void push(T x);
    T pop();
};
template <class T>
void stack<T> : push(T x)
{
    if (top == size - 1)
    {
        cout << "Stack is Full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class T>
T stack<T> : pop()
{
    T x = 0;
    if (top == -1)
    {
        cout << "Stack is Empty " << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<int> s(5);
    s.push(3);
    s.push(4);
    s.pop();
    s.push(6);
}