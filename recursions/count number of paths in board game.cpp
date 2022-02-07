#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int countpath(int s,int e)
{
    if(s==e)
    {
        return 1;
    }
    if(s>e)
    {
        return 0;
    }
    int count =0;
    for(int i=0;i<=6;i++)//since it is dependent on dice (i<6)
    {
           count+=countpath(s+i,e); //it willtell all path leading to smallest one first(last one) then slowly add larger paths
    }
    return count;
}
int main()
{
    cout<<countpath(0,3)<<endl;
    return 0;

}