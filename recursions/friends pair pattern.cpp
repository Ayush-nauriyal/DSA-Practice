//NUMBER OF WAYS IN WHICH N FRIENDS 
//CAN REMAIN SINGLE 
//OR CAN BE PAIRED UP

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int friend_pair(int n)
{
    if(n==1||n==2||n==0)
    return n;//friend pair(n-1) gives n-1 people's combination adding the other gives us all the pairs and maps that can be formed using it
    return friend_pair(n-1) +friend_pair(n-2)*(n-1);

}
int main()
{
    cout<<friend_pair(4)<<endl;
    return 0;
}