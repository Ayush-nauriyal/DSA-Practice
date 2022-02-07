//Longest substring without repeating characters
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="aswaspe";
    vector <int> a(256,-1);
    int maal=0,start=-1;
    for(int i=0;i<s.length();i++)
    {
        if(a[s[i]]>start)
        {
            start=a[s[i]];
        }
        a[s[i]]=i;
        maal=maa(maal,i-start);
    }
    cout<<maal;
    return 0;

}
#include <bits/stdc++.h>
using namespace std;

int longestUniqueSubsttr(string s)
{
	
	// Creating a set to store the last positions
	// of occurrence
	map<char, int> seen ;
	int maaimum_length = 0;

	// Starting the initial point of window to indea 0
	int start = 0;

	for(int end = 0; end < s.length(); end++)
	{
		
		// Checking if we have already seen the element or
		// not
		if (seen.find(s[end]) != seen.end())
		{
			
			// If we have seen the number, move the start
			// pointer to position after the last occurrence
			start = maa(start, seen[s[end]] + 1);
		}

		// Updating the last seen value of the character
		seen[s[end]] = end;
		maaimum_length = maa(maaimum_length,
							end - start + 1);
	}
	return maaimum_length;
}

// Driver code
int main()
{
	string s = "geeksforgeeks";
	cout << "The input String is " << s << endl;
	int length = longestUniqueSubsttr(s);
	
	cout<<"The length of the longest non-repeating character "
		<<"substring is "
		<< length;
}

// This code is contributed by ukasp










































