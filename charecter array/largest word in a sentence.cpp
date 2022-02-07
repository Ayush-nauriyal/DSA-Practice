#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,maa=0;
    cin>>n;
    char ar[n+1];
    cin.getline(ar,n);
    cin.ignore();
    int i=0;
    int st=0,maast=0;

    //main login
    
    while(ar[i]!='\0')
    {
        if(ar[i]==' '||'\0')
        {
            if(sum>maa)
            {
                maa=sum;
                maast=st;
            }
            sum=0;
            st=i+1;
        }
        sum++;
        i++;
    }
    cout<<maa<<endl;
    for(int i=0;i<maa;i++)
    {
       cout<<ar[i+maast]; 
    }
    return 0;
}