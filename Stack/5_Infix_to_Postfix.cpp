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
    bool push(char val)
    {
        if(top == size - 1)
        {
            cout<<"Stack is Full";
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
            return '\0';
        }
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
int precedence(char op)
{
    if(op == '^')
        return 3;
    else if(op == '*' || op == '/')
        return 2;
    else if(op == '+' || op == '-')
        return 1;
    else
        return 0;
}
string infixtopostfix(string str)
{
    Stack s(str.length());
    string result;

    for(int i=0;i<str.length();i++)
    {
        char ch = str[i];

        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
            result += ch;

        else if(ch == '(')
            s.push(ch);

        else if(ch == ')')
        {
            while(!s.isEmpty() && s.peek() != '(')
                result += s.pop();

            if(!s.isEmpty())
                s.pop();
        }
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
int main()
{
    string str;

    cout<<"Enter infix expression: ";
    cin>>str;

    cout<<"Postfix expression: "<<infixtopostfix(str);

    return 0;
}
