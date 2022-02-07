#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string movea(string s)
{
    if (s.length() == 0)
    {
        return;
    }
    char ch = s[0];
    string ans = movea(s.substr(1)); // hepling in traversing the whole string using recursion
    if (ch == 'a')                   //ans will be lead to last of string returning nothing then the char is compared and a is put last  else simply the char is put in front leading back to orignal string with just a placed at end
    {
        return ans + ch;
    } //if the charecter is a by ans+ch a will be added to last of the string

    return ch + ans;
}
int main()
{
    string s;
    cin >> s;
    cout << movea(s);
    return 0;
}