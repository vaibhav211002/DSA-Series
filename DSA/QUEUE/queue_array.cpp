#include <iostream>
using namespace std;


class test
{
    public:
    int size;
    int front;
    int rear;
    int *Q;

    test(int size)
    {
        this->size=size;
        front=-1;
        rear=-1;
        Q=new int[this->size];
    }

    void enqueue(int x)
    {
        if(rear==size-1)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            rear++;
            Q[rear]=x;
        }
    }

    int dequeue()
    {
        int x=-1;
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else{
            
            x=Q[front+1];
            front++;
        }
        return x;
    }

    void display()
    {
        for(int i=front+1;i<=rear;i++)
        {
            cout<<Q[i]<<endl;
        }
    }
};

int main()
{

    test q(5);
    int a=1;
    for (int i = 0; i <5; i++)
    {
        q.enqueue(a);
        a++;
    }
    q.display();
    cout<<endl;
    
    q.dequeue();
    q.display();
    cout<<":)"<<endl;

}
