//print the largest number which can be formed
//with the help of 1,0 array containing
//only 1 with k changes possible
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a = {1, 1, 1, 0, 0, 0, 0, 1, 1, 1};
    int k = 4;
    int zer = 0, ans = 0, j = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 0)
        {
            zer++;
        }
        while (zer > k)
        {
            if (a[j] == 0)
                zer--;
            j++;
        }
        ans = maa(ans, i - j + 1);
    }

    cout << ans;
}
