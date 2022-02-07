#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//r is symbolising the end of array 
//whereas l is starting of array
void merge(int ar[],int l,int mid,int r)
{ int a=mid-l+1;
int y=r-mid;
    int a[a];//temp array
    int b[y];
    //assigning values 
    //since there are two sorted
    //arrays then the array a is assigned 
    //the first half of array and
    //b is assigned second half
    for(int i=0; i<a;i++)
    {
        a[i]=ar[l+i];
    }
    for(int i=0;i<y;i++)
    {
        b[i]=ar[mid+l+i];
    }
    
    int i=0;
    int j=0;
    int k=l;
    //merging two small sorted array 
    //in a way that makes them 
    //comletely sorted
    while(i<a && j<y)
    {
        if(a[i]<b[j])
        {
            ar[k]=a[i];
            k++;
            i++;
        }
        else
        {
            ar[k]=b[j];
            k++;
            j++;
         }
    }
    while(i<a)
    {
        ar[k]=a[i];
        k++;
        i++;
    }
     while(j<y)
    {
        ar[k]=b[j];
        k++;
        j++;
    }

}
void mergesort(int ar[],int l,int r)
{//basically deviding the array in 
//two part (recursivly) so that later on they can 
//they can be sorted in merge  function
//this recursion keeps on until the smallest part is left
    if(l<r)
    {
        int  mid=(l+r)/2;
        mergesort(ar,l,mid);
        mergesort(ar,mid+1,r);
        merge(ar,l,mid,r);
    }
}
int main()
{
    int ar[]={7,8,5,9,4,3,5};
    mergesort(ar,0,6);
    for(int i=0;i<=6;i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    return 0;
}