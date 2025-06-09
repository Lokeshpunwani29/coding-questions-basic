#include<iostream>
using namespace std;
#define SIZE 100

class Stack
{
    private:
    int arr[SIZE];
    int top;
    
    public:
    Stack()
    {
        top = -1;
    }
    
    void push(int num)
    {
        if(top >= SIZE - 1) cout<<"Overflow"<<endl;
        else
        {
            top++;
            arr[top] = num;
            cout<<"Pushed Successfully"<<endl;
        }
    }
    
    void pop()
    {
        if(top<0) cout<<"Underflow"<<endl;
        else
        {
            cout<<arr[top]<<" removed Successfully"<<endl;
            top--;
        }
    }
    
    int peek()
    {
        if(top < 0 )
        {
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        else
        {
            return arr[top];
        }
    }
    
    bool isEmpty()
    {
        if(top<0) return true;
    }
    
    int size()
    {
        return top + 1;
    }
};




int main()
{
    Stack s1;
    s1.push(46);
    s1.push(23);
    s1.push(74);
    s1.push(25);
    s1.push(12);
    cout<<s1.size()<<endl;
    s1.pop();
    cout<<s1.peek()<<endl;
    
    return 0;
}
