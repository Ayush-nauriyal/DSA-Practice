#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int ar[],int i,int j)
{
    int temp=ar[i];
    ar[i]=ar[j];
    ar[j]=temp;

}
//we will keep on making certain points(pivot)
//which will have smaller number before it
//and larger after it although not being in
// an completely sorted order
int partition(int ar[],int l,int r)
{//pi ==pivot point
    int pi=ar[r];
    int i=l-1;
    for(int j=l;j<r;j++)
    {
        if(ar[j]<pi)
        {
            i++;
            //it will swap and try to make it 
            //somewhat in correct order
            swap(ar,i,j);
        }
    }
    //the last element will be placed
    // in its correct position as the last elemnt
    //is swapped to reach its correct positiom
    //as the position  is last position 
    //having a number number smaller than pi
    //i+1 isw definately bigger than pi
    swap(ar,i+1,r);
    return i+1;

}
void quick(int ar[],int l,int r)
{
    if(l<r)
    {
        int pi=partition(ar,l,r);

        quick(ar,l,pi-1);
        quick(ar,pi+1,r);

    }
}
int main()
{
    int ar[]={6,8,7,9,5,6,5};
    quick(ar,0,6);
    for(int i=0;i<7;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;

    return 0;
}