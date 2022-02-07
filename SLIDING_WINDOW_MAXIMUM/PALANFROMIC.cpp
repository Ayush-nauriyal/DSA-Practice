//find the subarray with k elements with palndromic Concatenation
#include <bits/stdc++.h>
using namespace std;
bool palindrome(int a)
{
    int num=a,temp=0;
    while(num>0)
    {
        temp=num%10+temp*10;
        num=num/10;
    }
    if(temp==a)
    {
        return true;
    }
    return false;

}
int answer(int ar[],int n,int k)
{
    int sum=0;
    for(int i=0;i<k;i++)
    {  sum=sum*10+ar[i];
    }
    if(palindrome(sum))
    {
        return 0;
    }
    for(int j=0;j<n;j++)
    {
        sum=(sum%(int)pow(10,k-1))*10+ar[j];
        if(palindrome(sum))
        {
            return 1;
        }

    }
    return -1;
}
//now in main check if the above function returns -1 then its has no subarray meeting the required condition




























































