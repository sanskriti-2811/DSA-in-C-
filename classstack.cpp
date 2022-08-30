#include <iostream>
using namespace std;

class Stack
{

public:
    int *arr;
    int top;

    int size;

    // constructor
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
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
            cout << "Stack Underflow" << endl;
        }
    }

    int peak()
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

    bool isempty()
    {
        if (top == -1)
        {
           return true ;}
        else
        {
           return false;
        }
    }
};
int main()
{

    Stack st(5);
    st.push(3);
    st.push(6);
    st.push(5);
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    cout << st.peak() << endl;

    if(st.isempty()){
        cout<<"Stack is empty"<<endl;

    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}