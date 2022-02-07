#include <iostream>
#include <stack>
using namespace std;
void reversesentense(string s)
{
    stack<string> a;

   
    for (int i = 0; i < s.length(); i++)
    {
         string w = "";
        while (i < s.length() && s[i] != ' ')
        {
            w = w + s[i];
            i++;
        }
        a.push(w);
    }
     while (!a.empty())
        {
            cout << a.top() << " ";
            a.pop();
        }
        cout << endl;
}
int main()
{
    string s = " how are you all";
    reversesentense(s);
    return 0;
}