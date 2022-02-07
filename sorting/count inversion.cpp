#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long merge(int ar[],int l,int mid,int r)
{ long long inv=0;
    int a=mid-l+1;
int y=r-mid;
    int a[a];
    int b[y];
    
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
            inv+=a-i;
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
    return inv;

}
long long mergesort(int ar[],int l,int r)
{ long long inv=0;
     if(l<r)
    {
        int  mid=(l+r)/2;
        inv+=mergesort(ar,l,mid);
        inv+=mergesort(ar,mid+1,r);
        inv+=merge(ar,l,mid,r);
    }
    return inv;
}
int main()
{
    int ar[]={7,8,5,9,4,3,5};
    cout<<mergesort(ar,0,6);
  
    cout<<endl;
    return 0;
}