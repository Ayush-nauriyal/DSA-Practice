//find the least number of length of subarray
//with its size greater than a
/*so basically we will take two pointers both pointing to 1 elemnt in aaray
and then gradually increase their value as needed
till value of sum is lower than (a) we keep on adding array element to 
sum
then we will run the loop till the value of sum is higher than (a)
if the lenghth of elments used is less than orignally taken lenght then
update vlue of min lenghth and and subtract form sum 

*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int solve(int ar[],int n,int a)
{
  int sum=0,min=n-1,st=0,en=0;
  while(en<n)
  {
      while(sum<a&&en<n)
      {  sum+=ar[en++];

      }
      while(sum>a && st<n)
      {  if((en-st)<min)
        {
            min=en-st;

        }
        sum-=ar[st++];

      }
  }
  return min;
}
int main()
{

return 0;

}



