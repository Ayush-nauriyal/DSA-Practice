#include <iostream>
#include <stack>
#include <bits/stdc++.h>
using namespace std;
int prec(char s)
{
    if (s == '^')
    {
        return 3;
    }
    if (s == '/' || s == '*')
        return 2;
    if (s == '+' || s == '-')
    {
        return 1;
    }
    else
        return -1;
}
void intopre(string s)
{  //main point for infia to prefia
//reverse it first
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    stack<char> st; 
    string res;
    //treat the bracket as bracket with
    //the opposite sign and treat it as infia to postfia
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == ')')
        {
            st.push(s[i]);
        }
        else if (s[i] == '(')
        {
            while (!st.empty() && st.top() != ')')
            {
                res += st.top();
                st.pop();
            }
            if (!st.empty())
            {
                st.pop();
            }
        }
        else
        {
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }
    //reverse it again to get the proper eapression
    reverse(res.begin(),res.end());
    cout << res;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    intopre(s);
    return 0;
}