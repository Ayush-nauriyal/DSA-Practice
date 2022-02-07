#include <bits/stdc++.h>
using namespace std;
int water(vector<int> a)
{ int n=a.size(),ans=0,i=0;
stack<int> st;
for(;i<n;i++)
{
    while(!st.empty()&&a[st.top()]<a[i])
    {
        int h=a[st.top()];
        st.pop();
        if(st.empty())
        {
            break;
        }
        else{
            int diff=i-st.top()-1;
            ans+=(min(a[st.top()] , a[i])-h)* diff;
        }
    }
    st.push(i);
}
return ans;
}
int main()
{vector<int> a={2,1,5,6,2,3};
cout<<water(a);
    return 0;
}

