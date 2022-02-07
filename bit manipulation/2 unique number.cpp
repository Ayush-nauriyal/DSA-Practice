#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int setBit(int n, int pos)
{
    return (n & 1 << pos); //sets position at desired postion
    //for eaample 1001 |1<<1(0010)==1011
}
void two_unique(int ar[], int n)
{
    int aorsum = 0;
    for (int i = 0; i < n; i++)
    {
        aorsum = aorsum ^ ar[i];
    }
    int tempaor = aorsum;
    int setbit = 0;
    int pos = 0; //to find rightmost setbit(1) of aorsum
    while (setbit != 1)
    {
        setbit = aorsum & 1;
        pos++;
        aorsum = aorsum >> 1; //making 1000=0100
    }                         //this when reaches 0001 pos will tell us the indea of the setbit(1)
    int newaor = 0;
    for (int i = 0; i < n; i++)
    {
        int a = ar[i];
        if (setBit(a, pos - 1))

        //this will tell us the number with 1 in same position as aorsum
        //and newaor will give us one of the unique number
        //newaor aor with aor sum will give us other unique number
        {
            newaor = newaor ^ ar[i];
        }
    }
    tempaor = tempaor ^ newaor;
    cout << "the two unique number are " << tempaor << "and " << newaor << endl;
}
int main()
{
    int ar[8] = {1, 2, 3, 4, 5, 3, 2, 1};
    two_unique(ar, 8);

    return 0;
}