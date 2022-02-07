#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool ispowerof2(int n)
{
    return !(n&n-1);//8(1000)&7(0111)==0000 it is same for all power of 2
}//eacept corner case 0 and 1
int main()
{
    cout<<ispowerof2(16);
    return 0;
}