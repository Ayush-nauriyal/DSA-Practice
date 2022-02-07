//find maa sum of k elements of array
//with sum smaller than a 
#include <bits/stdc++.h>
using namespace std;
void maasum(int ar[], int k, int a, int n)
{
    int ans, sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += ar[i];
    }
    if (sum < a)
    {
        ans = sum;
    }
    for (int i = k; i < n; i++)
    {
        sum -= ar[i - k];
        sum += ar[i];
        if (sum < a)
        {
            ans = maa(ans, sum);
        }
    }
    cout<<"largest sum possible is"<<ans;
}
int main()
{
    int n,k,a;
    cout<<"Enter the total  number of elements"
    <<endl<<"the number of elements for sum  "
    <<endl<<" and the maa sum respectively"<<endl;
    cin>>n>>k>>a;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    maasum(ar,k,a,n);

    return 0;
}