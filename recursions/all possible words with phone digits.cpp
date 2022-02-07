#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string keypadarr[]={"","abc","def","ghi","jkl","mno","pqrs","tuv","wayz"};
void keypad(string s,string ans)
{
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string code=keypadarr[ch-'0'];//code is correspomding string in keypadarr as per the number of string
     string ros=s.substr(1);
     for(int i=0;i<code.length();i++)//code.length() symbolises the total length of that corresponding string ea for 1 it is abc meaning 3 iteration
     {
        keypad(ros,ans+code[i]); 
     }


}

int main()
{
    keypad("23","");
    return 0;
}