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
            cout<<"Stack Full";
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
            cout<<"Stack is Empty";
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
    cout<<"Enter a Word: ";
    cin>>str;

    string ori = str;
    string pal;

    int len = str.length();

    Stack s(len);

    for(int i=0;i<len;i++)
        s.push(str[i]);

    for(int i=0;i<len;i++)
        pal += s.pop();

    if(ori == pal)
        cout<<str<<" is a Palindrome string";
    else
        cout<<str<<" is not a Palindrome String";
    
    return 0;
}
