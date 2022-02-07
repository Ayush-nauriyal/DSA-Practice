#include <iostream>
#include <bits/stdc++.h>               //ULTIMATE HEADER FILE NO NEED FOR OTHER HEADER FILE
#include <string>
using namespace std;
//could simply be done by function transform
//transform(s,begin(),s.end(),from where(normally s.begin()),::tolower/upper)
int main()
{
    string s = "vhgfhgfdhtgdhghgfhgfhg";
    //to conver t in uppercase
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
            s[i]-=32;//simply ascii value difference

        }

    }
    cout<<s;

    return 0;
}
/*FOR CONVERTING TO LOWER CASE
int main()
{
    string s = JFFGHhghjgjHJFHJFHJ";
    //to conver t in uppercase
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            s[i]+=32;//simply ascii value difference

        }

    }

    return 0;
}
*/