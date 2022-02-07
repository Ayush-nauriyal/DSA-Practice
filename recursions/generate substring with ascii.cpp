#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void subseq(string s,string ans)
{
    if (s.length()==0)
    {
        cout<<ans<<endl;//the only thing printed is ans which initialy is an empty string 
        return;//but later an ch is being added to it one time and one time not | causing all the braches of substring
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));//just for fun

}
int main()
{
    subseq("ABC","");
 return 0;
} 