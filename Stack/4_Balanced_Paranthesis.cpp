#include <iostream>
using namespace std;

class Stack
{
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
    bool push(int val)
    {
        if(top == size - 1)
            return false;

        top++;
        arr[top] = val;
        return true;
    }
    char pop()
    {
        if(top == -1)
            return '\0';

        char val = arr[top];
        top--;
        return val;
    }
    char peek()
    {
        if(top == -1)
            return '\0';

        return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
};
bool isBalanced(string str)
{
    Stack s(str.length());

    for(int i=0;i<str.length();i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);

        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
        {
            if(s.isEmpty())
                return false;

            char top = s.pop();

            if(str[i] == '(' && top != ')')
                return false;

            if(str[i] == '{' && top != '}')
                return false;

            if(str[i] == '[' && top != ']')
                return false;
        }
    }
    return s.isEmpty();
}
int main()
{
    string str;
    cout<<"Enter Brackets: ";
    cin>>str;

    if(isBalanced(str))
        cout<<"Balanced";
    else
        cout<<"Not Balanced";

    return 0;
}
