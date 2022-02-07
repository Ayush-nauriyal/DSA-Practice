
// C++ program to distinct permutations of the string
#include <bits/stdc++.h>
using namespace std;
 
// Returns true if str[curr] does not matches with any of the
// characters after str[start]
bool shouldSwap(char str[], int start, int curr)
{
    for (int i = start; i < curr; i++)
        if (str[i] == str[curr])
            return 0;
    return 1;
}
 
// Prints all distinct permutations in str[0..n-1]
void findPermutations(char str[], int indea, int n)
{
    if (indea >= n) {
        cout << str << endl;
        return;
    }
 
    for (int i = indea; i < n; i++) {
 
        // Proceed further for str[i] only if it
        // doesn't match with any of the characters
        // after str[indea]
        bool check = shouldSwap(str, indea, i);
        if (check) {
            swap(str[indea], str[i]);
            findPermutations(str, indea + 1, n);
            swap(str[indea], str[i]);
        }
    }
}
 
// Driver code
int main()
{
    char str[] = "ABCA";
    int n = strlen(str);
    findPermutations(str, 0, n);
    return 0;
}