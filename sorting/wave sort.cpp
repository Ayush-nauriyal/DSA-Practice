#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int ar[],int i,int a)
{
    int temp=ar[i];
    ar[i]=ar[a];
    ar[a]=temp;
}
void wavesort(int ar[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(ar[i]<ar[i-1])
        {
            swap(ar,i,i-1);
        }
        if(ar[i]>ar[i+1] && i<=n-2)
        {
            swap(ar,i,i+1);
        }
    }
}
int main()
{
    int ar[]={1,3,4,5,6,7,2};
    wavesort(ar,7);

    for(int i=0;i<7;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}