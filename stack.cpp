#include <iostream>
#define maxSize 5
using namespace std;

class Stack
{
private:
    int tos;

public:
    int stack[maxSize];
    Stack()
    {
        tos = -1;
    }

    bool isEmpty() { return tos == -1; }
    bool isFull() { return tos == maxSize - 1; }

    void push(int item)
    {
        if (isFull())
        {
            cout << "Stack is full";
        }
        stack[++tos] = item;
    }

    int pop()
    {
        int item;
        if (isEmpty())
        {
            cout << "stack is empty";
        }
        item = stack[tos--];
        return item;
    }
};

int main()
{
    Stack s;
    int n;
    for (int i = 0; i <= maxSize - 1; i++)
    {
        cout << "Enter the value to be pushed:";
        cin >> n;
        s.push(n);
    }

    for (int i = 0; i <= maxSize - 1; i++)
    {

        cout << s.pop() << "\t";
    }

    return 0;
}