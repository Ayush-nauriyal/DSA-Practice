#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int power(int n,int p)
{
    if(p==0)
    return 1;

    int prevpower;
    prevpower=power(n,p-1);
    return n*prevpower;

}
int  main()
{
    int a,y;
    cin>>a>>y;
    cout<<power(a,y);
    return 0;
}