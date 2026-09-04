#include <iostream>
using namespace std;

class Stack
{
private:
    int *arr;
    int top;
    int size;

public:
    Stack(int n)
    {
        size = n;
        top = -1;
        arr = new int[size];
    }
    bool push(int val)
    {
        if(top == size - 1)
        {
            cout<<"Stack Overflow"<<endl;
            return false;
        }

        top++;
        arr[top] = val;

        return true;
    }
    bool pop()
    {
        if(top == -1)
        {
            cout<<"Stack Underflow"<<endl;
            return false;
        }

        top--;
        return true;
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is Empty"<<endl;
            return;
        }
        for(int i = top; i >= 0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    int n;

    cout<<"Enter size of the stack: ";
    cin>>n;

    Stack s(n);

    char op = 'y';

    do
    {
        int choice;

        cout<<"\nChoose your Option"<<endl;
        cout<<"1. Insert"<<endl;
        cout<<"2. Delete"<<endl;
        cout<<"3. Display"<<endl;
        cin>>choice;

        if(choice == 1)
        {
            int val;

            cout<<"Enter value to insert: ";
            cin>>val;

            if(s.push(val))
                cout<<"Value Inserted!"<<endl;
        }
        else if(choice == 2)
        {
            if(s.pop())
                cout<<"Value Deleted"<<endl;
        }
        else if(choice == 3)
            s.display();
        else
            cout<<"Invalid Input"<<endl;
        
        cout<<"Do you want to Operate again? (y/n): ";
        cin>>op;

    } while(op == 'y' || op == 'Y');

    return 0;
}
