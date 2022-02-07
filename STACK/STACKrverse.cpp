#include <iostream>
#include <stack>
using namespace std;
void insertatbottom(stack<int> &s,int a)
{
    
    s.push(a);
}

void reversestack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int a=s.top();
    s.pop();
    reversestack(s);
    insertatbottom(s,a);

}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(3);
    reversestack(st);
    while (!st.empty())
    {
        cout << st.top()<<"  ";
        st.pop();
    }
    cout << endl;
    return 0;
}




































