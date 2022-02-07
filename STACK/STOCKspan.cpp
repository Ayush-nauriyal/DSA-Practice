#include<bits/stdc++.h>
using namespace std;
int stock(vector<int> a)
{
    vector<int>ans;
    stack<pair<int,int>> s;
    
    for(auto price:a)
    {//at least 1 day
        int days=1;
         while(!s.empty() && s.top().first<=price)
         {
             days+=s.top().second;
            s.pop();
         }
         ans.push_back(days);
         s.push({price,days});
    }
    for(int j=0;j<ans.size();j++)
    {
        cout<<ans[j]<<" ";
    }
}
int main()
{
    vector<int> a={100,80,60,70,60,75,85};
    stock(a);
    return 0;
}
