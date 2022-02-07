//find the three numbers whose sum is equal to given number(sum)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, sum;
    cin >> num;

    vector<int> a(num);
    for (auto &i : a)
        cin >> i;
    cout << "enter the target";
    cin >> sum;
    bool ans = false;
    sort(a.begin(), a.end());
    for (int i = 0; i < num; i++)
    {
        int lo = i + 1, high = num - 1;
        while (lo < high)
        {
            int cur = a[i] + a[lo] + a[high];
            if (cur == sum)
            {
                ans = true;
            }
            else if (cur > sum)
            {
                high--;
            }
            else
            {
                lo--;
            }
        }
    }
    if (ans)
    {
        cout << " present";
    }
    else
        cout << "not present";
    return 0;
}