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
        front=0;
        rear=0;
        Q=new int[this->size];
    }

    void enqueue(int x)
    {
        if((rear+1)%size==front)
        {
            cout<<"queue is full"<<endl;
        }
        else{
            rear=(rear+1)%size;
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
            front=(front+1)%size;
            x=Q[front];
        }
        return x;
    }

    void display()
    {
        int i=front+1;

        do
        {
            cout<<Q[i]<<endl;
            i=(i+1)%size;
            
        } while (i!=(rear+1)%size);
    }
};

int main()
{

    test q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(60);
    q.enqueue(50);
    q.display();
    q.dequeue();
    cout<<endl;
        q.display();
    

    cout<<":)"<<endl;

}
