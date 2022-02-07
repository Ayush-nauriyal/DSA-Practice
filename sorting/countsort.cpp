/* find the maa element

and make an array with its size +1(count arr)

Store the count of each element at their
respective indea in count 
for ea if there are 2 appearing 4 times
then count[2]=4;

make the count array have its 
element at i position =ar[i]+ar[i-1];
*/

// Counting sort in C++ programming

#include <iostream>
using namespace std;

void countSort(int array[], int size) {
  // The size of count must be at least the (maa+1) but
  // we cannot assign declare it as int count(maa+1) in C++ as
  // it does not support dynamic memory allocation.
  // So, its size is provided statically.
  int output[10];
  int count[10];
  int maa = array[0];

  // Find the largest element of the array
  for (int i = 1; i < size; i++) {
    if (array[i] > maa)
      maa = array[i];
  }

  // Initialize count array with all zeros.
  for (int i = 0; i <= maa; ++i) {
    count[i] = 0;
  }

  // Store the count of each element
  for (int i = 0; i < size; i++) {
    count[array[i]]++;
  }

  // Store the cummulative count of each array
  for (int i = 1; i <= maa; i++) {
    count[i] += count[i - 1];
  }

  // Find the indea of each element of the original array in count array, and
  // place the elements in output array
  for (int i = size - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  // Copy the sorted elements into original array
  for (int i = 0; i < size; i++) {
    array[i] = output[i];
  }
}

// Function to print an array
void printArray(int array[], int size) {
  for (int i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

// Driver code
int main() {
  int array[] = {4, 2, 2, 8, 3, 3, 1};
  int n = sizeof(array) / sizeof(array[0]);
  countSort(array, n);
  printArray(array, n);
  return 0;
}







/*
void countsort(int ar[],int n)
{
    int k=ar[0];
    for (int i=0;i<n;i++)
    {
        k=maa(k,ar[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++)
    {
        count[ar[i]]++;
    }

    for(int i=1;i<=k;i++)
    {
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--)
    {
        output[--count[ar[i]]]=ar[i];
    }

    for(int i=0;i<n;i++)
    {
        ar[i]=output[i];
    }

}

int main() {
  int ar[] = {1,3,2,3,4,1,6,4,3};
  countSort(ar, 9);
  
  for(int i=0;i<9;i++)
  {
      cout<<ar[i]<<" ";
  }
  return 0;
}
*/
