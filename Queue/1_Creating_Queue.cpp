#include <iostream>
using namespace std;

class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }
    void enqueue(int val)
    {
        if(rear == size - 1)
        {
            cout<<"Queue Overflow"<<endl;
            return;
        }

        if(front == -1)
            front = 0;
        
        rear++;
        arr[rear] = val;
    }
    void dequeue()
    {
        if(front == -1 || front > rear)
        {
            cout<<"Queue is Empty"<<endl;
            return;
        }

        cout<<arr[front]<<" has been deleted"<<endl;
        front++;
    }
    void display()
    {
        if(front == -1)
        {
            cout<<"Queue Is Empty"<<endl;
            return;
        }

        for(int i=front;i<=rear;i++)
            cout<<arr[i]<<" ";

        cout<<endl;
    }
};

int main()
{
    int n, choice, val;
    char op = 'Y';
    cout<<"Enter the size of the Queue: ";
    cin>>n;

    Queue q(n);

    do
    {
        cout<<"Choose Your Option"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;

        cin>>choice;

        if(choice == 1)
        {
            cout<<"Enter Value: ";
            cin>>val;

            q.enqueue(val);
        }
        else if(choice == 2)
        {
            q.dequeue();
        }
        else if(choice == 3)
        {
            cout<<"Queue"<<endl;
            q.display();
        }
        else
            cout<<"Invalid Input"<<endl;

        cout<<"Do you wish to perform Operations again? (y/n): ";
        cin>>op;
    }while(op == 'Y' || op == 'y');

    cout<<"Thank You!"<<endl;

    return 0;
}
