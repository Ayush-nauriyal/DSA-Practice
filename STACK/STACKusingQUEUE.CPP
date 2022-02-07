#include <bits/stdc++.h>
using namespace std;
class STACK
{

    queue<int> q1;

public:
    void push(int a)
    {
        queue<int> temp;
        temp.push(a);
        while (!q1.empty())
        {
            temp.push(q1.front());
            q1.pop();
        }
        swap(q1, temp);
    }
    void pop()
    {
        q1.pop();
    }
    int top()
    {
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};

int main()
{
    STACK s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();
    cout << s.top();
    s.pop();

    return 0;
}