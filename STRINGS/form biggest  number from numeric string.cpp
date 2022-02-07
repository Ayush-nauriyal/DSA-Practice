#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
    string s="12345";
    sort(s.begin(),s.end(),greater<int>());//default is ascending
     cout<<s;
    return 0;
}