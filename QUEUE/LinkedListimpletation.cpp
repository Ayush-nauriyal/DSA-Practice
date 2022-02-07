#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*neat;
    node(int a)
    {
        data=a;
        neat=NULL;
    }

};
class queue
{
    node* front;
    node* back;
    public:
    queue()
    {
        front=NULL;
        back=NULL;
    }
    void push(int a)
    {
        node * n=new node(a);
        if(front==NULL)
        {
            front=n;
            back=n;
        }
        back->neat=n;
        back=n;
    }
    void pop()
    {
        node* todel=front;
        if(front==NULL)
        {
            cout<<" QUEUE UNDERFLOW";
            return;
        }
        front=front->neat;
        delete todel;
    }
    int peek()
    {
        if(front==NULL)
        {
            cout<<" no element found";
            return-1;
        }
        return (front->data);

    }
    bool empty()
   {
       if(front==NULL)
       {
           return true;
       }
       else
       return false;

   }

};
int main()
{ queue q;
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