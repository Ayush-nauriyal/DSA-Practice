#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int numberofone(int n)//19&18 18&17 17&16 this step takes place three times 17&16==0 this shows it has three 1
//2'power number(2,4,8,16,...) & number with 1 greater value makes it's & =0
{
    int count=0;
    while(n)
    {
        n=n&(n-1);
        count++;
    }
    return count;
}
int main()
{ cout<<numberofone(19)<<endl;
    return 0;
}
/*another way could be to
SIMPLY ASK FOR GETBIT FOR EACH OF ITS POSITION AND 
CHECK IF IT IS  ONE OR NOT IF ITS 1 COUNT++
ELSE THE LOOP CONTINUES*/ 