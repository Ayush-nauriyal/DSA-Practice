#include <bits/stdc++.h>
using namespace std;
bool sorted(int arr[],int n)
{
    if(n==1)
    return true;

  bool restarray =sorted(arr+1,n-1);
  return(arr[0]<arr[1]&&restarray);
}
int  main()
{
    int a[]={1,2,3};
    cout<<sorted(a,3);
     return 0;
}