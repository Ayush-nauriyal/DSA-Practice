#include <bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    if(s.length()==0)//base case
    {
        return;
    }
    string rest=s.substr(1);
    reverse(rest);//recursion used before cout
    cout<<s[0];//by the time it is printed the first time 
               //it has already reached the last element and will continue till 1st
}
int main()
{  string s;
   cin>>s;
   reverse(s);

    return 0;
}