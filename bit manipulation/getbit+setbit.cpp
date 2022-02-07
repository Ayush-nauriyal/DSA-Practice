#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int getbit(int n,int pos)
{
    return((n &(1<<pos))!=0);
}
int setbit(int n,int pos)
{
    return (n|1<<pos);//sets position at desired postion 
    //for eaample 1001 |1<<1(0010)==1011
}
int clearbit(int n,int pos)//make given position bit==
{ int mask=~(1<<pos);
    return(mask & n);                               //make the bit u want to remove 0 and all else 1 
                                   //for ea at pos 2 so make 1011& thge given number  
}
int updatebit(int n,int pos,int value)
{
    int mask=~(1<<pos);
    n=n & mask;//clear bit +
    return (n|(value<<pos)); //setbit(value instead of 1 as it gives you freedom to update with your choice)

}
int main()
{   cout<<getbit(5,2);//==1 since 5==0101 anspositions are 3(2)10
   return 0;
}