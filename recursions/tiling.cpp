/*the floor is of size 2*n and
 the tile is of size 2*1
*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int tilingways(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return tilingways(n-1)+tilingways(n-2);//n-2 in case of horizontal tile n-1 in case of vertical tiles
}
int main()
{
    tilingways(4);
    return 0;
}