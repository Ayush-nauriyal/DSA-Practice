/*
USING TWO STACKS

#include<bits/stdc++.h>
using namespace std;
class queu
{
    stack<int> s1;
    stack <int> s2;
    public:
    void push(int a)
    {
        s1.push(a);
    }
    int pop()
    {
        if(s1.empty()&& s2.empty())
        {
            cout<<"queue is empty";
            return -1;
        }
        if(s2.empty())
        {
          while(!s1.empty())
          {
              s2.push(s1.top());
              s1.pop();
          }
        }
        int v=s2.top();
        s2.pop();
        return v;

    }
    bool empty()
    {
        if(s1.empty()&&s2.empty())
        {
            return true;
        }
        return false;
    }
};



int main()
{
    queu q;
    q.push(1);;
    q.push(2);
    q.push(3);
    q.push(4);
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
   cout<<q.pop()<<endl;
    return 0;
}

*/

//USING ONE STACK
#include <bits/stdc++.h>
using namespace std;
class queu
{
    stack<int> s1;

public:
    void push(int a)
    {
        s1.push(a);
    }
    int pop()
    {
        if (s1.empty())
        {
            cout << "queue is empty";
            return -1;
        }
        int a = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return a;
        }
        int item = pop();
        s1.push(a);
        return item;
    }
    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queu q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    cout << q.pop() << endl;
    return 0;
}