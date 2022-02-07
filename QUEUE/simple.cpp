#include<iostream>
#define n 20
using namespace std;
class queue
{
    int* ar;
    int front ;
    int back;

    public:
    queue()
    {
        ar=new int [n];
        front=-1;
        back=-1;
    }
    void push(int a)
    {
        if(back==n-1)
        {
            cout<<" QUEUE OVERFLOW"<<endl;
            return;
        }
        back++;
        ar[back]=a;
        if(front==-1)
        front++;

    }
    void pop()
    {
        if(front==-1||front>back)
        {
            cout<<" no elements";
            return ;
        }
        front++;
    }
    int peek()
    {
        if(front==-1|| front>back)
        {
            cout<<"No elements in queue";
            return -1;
        }
        return ar[front];
    }
    bool empty()
    {
        if(front==-1|| front>back)
        {
          return true;
        }
        return false;

    }

};
int main()
{
     queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    cout<<q.peek()<<endl;
    q.pop();
     cout<<q.peek()<<endl;
    q.pop();
     cout<<q.peek()<<endl;
    q.pop();
     cout<<q.peek()<<endl;
    q.pop();

     cout<<q.peek()<<endl;
    q.pop();
    return 0;
}