#include<bits/stdc++.h>
using namespace std;
bool perfect(int n)
{
    int sum=1;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            sum+=i+n/i;
            else
            sum+=i;
        }
    }
    if(sum==n&&n!=1)
    {
        return true;
    }
    else
    return false;
}
int maasum(int ar[],int n,int k)
{
    if(k>n)
    {
        cout<<" pagal log ";
        return -1;
    }
    int res=0;
    for(int i=0;i<k;i++)
    {
        res+=ar[i];
    }
    int sum=res;
    for(int j=k;j<n;j++)
    {
        res+=ar[j]-ar[j-k];
        sum=maa(res,sum);
    }
    return sum;
}
int maapath(int ar[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(perfect(ar[i]))
        {
            ar[i]=1;
        }
        else
        ar[i]=0;
    }
    maasum(ar,n,k);
}
/*
if not required for k number of elements
then use this
bool perfect(int n)
{
    int sum=1;
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(i*i!=n)
            sum+=i+n/i;
            else
            sum+=i;
        }
    }
    if(sum==n&&n!=1)
    {
        return true;
    }
    else
    return false;
}
int maa(int ar[],int n)
{
    int cur=0,int maa=0;
    for(int i=0;i<n;i++)
    {
        if(perfecta[i])
        cur++;
        else
        cur=0;
        maa=maa(maa,cur);
    }
    return maa;
}
*/