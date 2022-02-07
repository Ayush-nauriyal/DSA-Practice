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
void intopost(string s)
{
    stack<char> st;
    string res;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && st.top() != '(')
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
    cout << res;
}
int main()
{
    string s = "(a-b/c)*(a/k-l)";
    intopost(s);
    return 0;
}