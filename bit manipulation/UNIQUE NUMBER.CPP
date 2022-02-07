#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// simply aor all numbers 
//the number with a duplicate will become zero
// leaving only the single number 
int unique(int ar[],int n)
{
    int aorsum=0;
    for(int i=0;i<n;i++)
    {
        aorsum=aorsum^ar[i];
    }
    return aorsum;
}
int main()
{ int ar[7]={1,2,3,4,3,2,1,};
cout<<unique(ar,7);
    return 0;
}