//find the subarray with k elments with sum divisible by 3
#include <bits/stdc++.h>
using namespace std;
void answer(int ar[],int n,int k)
{
    pair<int,int> a;
    int sum=0;
    for(int i=0;i<k;i++)
    {  sum +=ar[i];
    }
    bool ans=false;
    if(sum%3==0)
    {  ans=true;
       a=make_pair(0,k-1);
    }
    for(int j=k;j<n;j++)
    {
        if(ans==true)
        break;
        
        sum+=ar[j];
        sum-=ar[j-k];
        if(sum%3==0)
        {
            ans=true;
            a=make_pair(j-k+1,j);
        }
    }
    if(ans!=true)
    {   a=make_pair(-1,0);       
    }
    if(a.first==-1)
    {
        cout<<"nothing eaists";
    }
    else
    for(int i=a.first;i<a.second;i++)
    {
        cout<<i<<" ";
    }cout<<endl;
}
//make main on own