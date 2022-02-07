//find prime by marking the multiples of number
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
void primesieve(int n)
{
    int prime[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
        {
              for (int j = i * i; j <= n; j += i)
            {
                prime[i] = 1;
            }
        }//all the multiples of number which are composite get marked
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
            cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cin >> n;
    primesieve(17);
    return 0;
}