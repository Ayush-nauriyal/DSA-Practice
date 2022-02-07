#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    return 0;
    int prevsum;
    prevsum=sum(n-1);
    return prevsum;

}
int  main()
{
    int a;
    cin>>a;
    cout<<sum(a);
    return 0;
}