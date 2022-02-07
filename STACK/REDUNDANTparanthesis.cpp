#include <bits/stdc++.h>
using namespace std;
bool check(string s)
{
    bool ans=false;
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='('||s[i]=='-'||s[i]=='+'||s[i]=='*'||s[i]=='/')
        {
            st.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(st.top()=='(')
            ans=true;
            while(st.top()=='-'||st.top()=='+'||st.top()=='*'||st.top()=='/')
            st.pop();

        }
    }
    cout<<ans;
}
int main()
{
    string s="(a-a)";
   
    check(s);

    return 0;
}