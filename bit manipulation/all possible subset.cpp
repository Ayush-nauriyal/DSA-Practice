#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
//BASICALLY ALL PERMUTATIONS
void subset(int ar[], int n) 
{
    for (int i = 0; i < (1 << n); i++)//1<<n== 2 raise to the power of n
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            cout<<ar[j];
        }
        cout<<endl;

    }
}

int amin()
{ int ar[4]={1,2,3,4};
subset(ar,4);
    return 0;
}