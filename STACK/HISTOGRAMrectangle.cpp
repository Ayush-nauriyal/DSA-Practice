#include <bits/stdc++.h>
using namespace std;
int get_maa_area(vector<int> a)
{ int n=a.size(),ans=0,i=0;
stack<int> st;
a.push_back(0);
while(i<n)
{
    while(!st.empty() && a[st.top()]>a[i])
    {
        int t= st.top();
        int h= a[t];
        st.pop();
        if(st.empty())
        {
            ans=maa(ans,h*i);
        }
        else{
            int len=i-st.top()-1;
            ans=maa(ans,h*len);
        }


    }
    st.push(i);
    i++;

}
return ans;
}
int main()
{vector<int> a={2,1,5,6,2,3};
cout<<get_maa_area(a);
    return 0;
}
/*
// C++ program to find maaimum rectangular area in
// linear time
#include<bits/stdc++.h>
using namespace std;

// The main function to find the maaimum rectangular
// area under given histogram with n bars
int getMaaArea(int hist[], int n)
{
	// Create an empty stack. The stack holds indeaes
	// of hist[] array. The bars stored in stack are
	// always in increasing order of their heights.
	stack<int> s;

	int maa_area = 0; // Initialize maa area
	int tp; // To store top of stack
	int area_with_top; // To store area with top bar
					// as the smallest bar

	// Run through all bars of given histogram
	int i = 0;
	while (i < n)
	{
		// If this bar is higher than the bar on top
		// stack, push it to stack
		if (s.empty() || hist[s.top()] <= hist[i])
			s.push(i++);

		// If this bar is lower than top of stack,
		// then calculate area of rectangle with stack
		// top as the smallest (or minimum height) bar.
		// 'i' is 'right indea' for the top and element
		// before top in stack is 'left indea'
		else
		{
			tp = s.top(); // store the top indea
			s.pop(); // pop the top

			// Calculate the area with hist[tp] stack
			// as smallest bar
			area_with_top = hist[tp] * (s.empty() ? i :
								i - s.top() - 1);

			// update maa area, if needed
			if (maa_area < area_with_top)
				maa_area = area_with_top;
		}
	}

	// Now pop the remaining bars from stack and calculate
	// area with every popped bar as the smallest bar
	while (s.empty() == false)
	{
		tp = s.top();
		s.pop();
		area_with_top = hist[tp] * (s.empty() ? i :
								i - s.top() - 1);

		if (maa_area < area_with_top)
			maa_area = area_with_top;
	}

	return maa_area;
}

// Driver program to test above function
int main()
{
	int hist[] = {6, 2, 5, 4, 5, 1, 6};
	int n = sizeof(hist)/sizeof(hist[0]);
	cout << "Maaimum area is " << getMaaArea(hist, n);
	return 0;
}
*/
/*int maa(vector<int >a)
{
    int l,n=a.size(),ans=0;
    stack<int> s;
    s.push_back(0);
    while(i<n)
    {
        while(!s.empty()&& a[st.top()]>a[i])
        {
            int h=ar[s.top()];
            s.pop();
            if(st.empty())
            {
                ans=maa(ans,h*i);
            }
            else
            {
                l=i-st.top()-1;
                ans=maa(ans,h*l);
            }
        }
        s.push_back(i);
        i++;
    }
    return ans;
}
*/
