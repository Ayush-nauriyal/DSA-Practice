#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int a[n1][n2];
    int b[n2][n3];
    int ans[n1][n3];

     //input
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>a[n1][n2];
        }
    }
      for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>a[n2][n3];
        }
    }
    //assigning 0 to all of ans matria
     for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[n1][n3]=0;
        }
    }
    //main code for working
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            for(int k=0;k<n2;k++)
            {
                ans[i][j] += a[i][k]*b[k][j];
            }
        }
    }
    //print
     for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        
           cout<<ans[n1][n3]<<" ";
        cout<<endl;
    }

    return 0;
}