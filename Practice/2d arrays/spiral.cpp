#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }

    // spiral order traversal print
    // row start ,end  column start ,end
    int r_st = 0, r_en = n - 1, c_st = 0, c_en = m - 1;
    while (r_st <= r_en && c_st <= c_en)
    { //r_st
        for (int col = c_st; col <= c_en; col++)
        {
            cout << a[r_st][col] << " ";
        }

        r_st++;

        //for c_en
        for (int row = r_st; row <= r_en; row++)
        {
            cout << a[row][c_en] << " ";
        }

        c_en--;

        //for r_en
        for (int col = c_en; c_en >= c_st; col--)
        {
            cout << a[r_en][col] << " ";
        }

        r_en--;

        for (int row = r_en; r_en >= r_st; row--)
        {
            cout << a[row][c_st] << " ";
        }
        
        c_st++;
    }

    return 0;
}