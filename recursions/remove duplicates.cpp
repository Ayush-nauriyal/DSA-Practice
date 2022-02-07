//can on;y remove duplicates only if they are alternatives
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string dup(string s)//REMOVE DUPLICATES
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];//ch will keep on changing due to below substr in following recursions
    string ans=dup(s.substr(1));//

    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);


}
int main()
{ cout<<dup("aaabcccbdrrd");
    return 0;
}