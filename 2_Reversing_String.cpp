#include <iostream>
using namespace std;

class Stack
{
private:
    char *arr;
    int top;
    int size;

public:
    Stack(int n)
    {
        size = n;
        arr = new char[size];
        top = -1;
    }
    bool push(char val)
    {
        if(top == size - 1)
        {
            cout<<"Stack Overflow";
            return false;
        }
        top++;
        arr[top] = val;
        return true;
    }
    char pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow";
            return false;
        }
        char val = arr[top];
        top--;
        return val;
    }
};
int main()
{
    string str;
    cout<<"Enter a String: ";
    cin>>str;

    int len = str.length();

    Stack s(len);

    for(int i=0;i<len;i++)
        s.push(str[i]);

    for(int i=0;i<len;i++)
        cout<<s.pop();

    return 0;
}
