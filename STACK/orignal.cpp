#include<iostream>
using namespace std;
#define n 100
class stack
{
    int* ar;
    int top;
    public:
    stack()
    {
        ar=new int[n];
        top=-1;
    }
    void push(int a)
    {
        if(top==n-1)
        {
            cout<<" stackoverflow"<<endl;
            return;
        }
        top++;
        ar[top]=a;
    }
    void pop()
    {
     if(top==-1)
     {
         cout<<" no element to pop"<<endl;
         return;
     }
     top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<" no elements in stack"<<endl;
            return -1;
        }
        return ar[top];
    }
    bool empty(){
        return top==-1;
    }
};
int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;

}