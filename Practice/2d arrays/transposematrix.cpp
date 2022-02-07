#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    //input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[n][m];
        }
    }
//swap(make transpose)

  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    /* if only needed to print transpose
int the cout loop simply swap n and m without using loop to swap in real data
  */ 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<a[n][m]<<" ";
        }
        cout<<endl;
    }
    
    
}