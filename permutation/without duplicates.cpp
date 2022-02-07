#include <iostream>
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
//ACTUAL WORKING
//swaping numbers numbers recurively and printing them 
 void permute(vector<int>&a ,int in)
 {
     if(in==a.size())
     {
         ans.push_back(a);
         return ;
     }
     for(int i=in;i<a.size();i++)
     {
         swap(a[i],a[in]);
         permute(a,in+1);

     }
 }
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto&i:a)
    {
        cin>>i;
    }
    permute(a,0);
    for(auto v: ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}
/* SHORTCUT
sort(a.begin(),a.end())
do
{
    ans.push_back(nums);

}while(neat_permutation(nums.begin(),nums.end()));(gives neat greter number)
*/
//