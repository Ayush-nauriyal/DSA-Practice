#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int setBit(int n, int pos)
{
    return (n | 1 << pos); //sets position at desired postion
    //for eaample 1001 |1<<1(0010)==1011
}
int getbit(int n,int pos)
{
    return((n &(1<<pos))!=0);
}
/*WE WILL MAKE AN LOOP OF 64(AS IN 64 BIT)
AT EACH LOOP ELEMENT IMPLYING THAT AT THAT POSITION OF A NUMBER HOW MANY NUMBERS HAVE 
SETBIT PRESENT AND WHEN WE MODULO THAT ELEMENT(SUM) WITH 3  THE ELEMENT WHICH HAVE 1 WILL  FORM TOGETHER 
TO GIVE US THE REQUIRED NUMBER(1 AT POS WITH LEFT SHIFT OPERATOR)*/

int unique_with_others_thrice(int ar[],int n)
{ int result=0;
    for(int i=0;i<64;i++)//COVERS ALL BIT
    { int sum=0;
     for(int j=0;j<n;j++)
     {
         if(getbit(ar[j],i))//CHECKING THE POS HAS SETBIT OR NOT
         {
             sum++;//TOTALLING THE NUMBER OF ELEMENT WITH SETBIT AT POS (i)
         }
     }
      if(sum%3!=0)//modulo with 3
      {
          result=setBit(result,i);//in process of making a number
      }
    }
    //result finally formed
    return result;

}
int main()
{  int ar[]={1,2,3,4,3,2,1,1,2,3};
   cout<<unique_with_others_thrice(ar,10)<<endl;
    return 0;
}