#include<iostream>
using namespace std;

class stack
{
    private:
    int top;
    int arr[100];

    public:
    stack()
    {
        top = -1;
    }
    void push(int x)
    {
        if (top < 99)
        {
            top++;
            arr[top] = x;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
};

int main()
{
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    cout << "Top element after pop: " << s.peek() << endl;
    return 0;
}