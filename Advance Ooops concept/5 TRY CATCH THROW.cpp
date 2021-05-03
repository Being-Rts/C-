#include <iostream>
using namespace std;
class StackOverflow : exception
{
};
class StackUnderFlow : exception
{
};
class Stack
{
private:
    int *stk, top = -1, size;

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[sz];
    }
    void push(int x)
    {
        if (top == size - 1)
            throw StackOverflow();
        top++;
        stk[top] = x;
    }
    auto pop()
    {
        if (top == -1)
            throw StackUnderFlow();
        return stk[top--];
    }
};
int main()
{
    Stack S(5);
    S.push(29);
    S.push(29);
    S.push(29);
    S.push(29);
    S.push(29);
    S.push(29);
    S.push(29);
}