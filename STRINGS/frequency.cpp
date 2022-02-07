#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s="hghgfhgcghchg";
    int t[26];
    for(int i=0;i<26;i++)
    {
        t[i]=0;
    }

    for(int i=0;i<s.length();i++)
    {
        t[s[i]-'a']++;
    }
    //now find largest no
    char ans='a';
    int freq=0;
    for(int i=0;i<26;i++)
    {
      if(t[i]>freq)
      {
          freq=t[i];
          ans=i+'a';
      }
    }
    cout<<freq<<" times  "<<ans;


    return 0;
}