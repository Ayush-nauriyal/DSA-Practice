#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char ar[n+1];
    cin>>ar;
    bool check=1;
    for(int i=0;i<n;i++)
    {
        if(ar[i]!=ar[n-1-i])
        {
            check=0;
            break;
        }
    }
    if(check)
    cout<<"word does eaist";
    else 
    cout<<"word does not eaist";

    return 0;
}