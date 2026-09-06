#include <iostream>
using namespace std;

class Stack
{
    char *arr;
    int size;
    int top;

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
        else
            return arr[top];
    }
    bool isEmpty()
    {
        return top == -1;
    }
};
int precedence(char op)
{
    if(op == '^')
        return 3;
    else if(op == '/' || op == '*')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}
string reverseString(string str)
{
    string result;

    for(int i=str.length()-1;i>=0;i--)
        result += str[i];

    return result;
}
string InfixtoPostfix(string str)
{
    Stack s(str.length());
    string result;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            result += ch;
        else
        {
            while(!s.isEmpty() && precedence(s.peek()) >= precedence(ch))
                result += s.pop();

            s.push(ch);
        }
    }
    while(!s.isEmpty())
        result += s.pop();

    return result;
}
string infixtoPrefix(string str)
{
    string reversed = reverseString(str);
    string postfix = InfixtoPostfix(reversed);
    string prefix = reverseString(postfix);

    return prefix;
}
int main()
{
    string str;

    cout<<"Enter infix expression: ";
    cin>>str;

    cout<<"Prefix expression: "<<infixtoPrefix(str);

    return 0;
}
