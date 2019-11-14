#include <iostream>
#include <stdio.h>
using namespace std;
bool prim(long n, long i){


    if (i>(n/2+1)){

        return true;
    }

    if (n%i == 0){

        return false;
    }

    return prim(n, i+1);

}


int main()
{
  int n,i,fact,j;
    cout <<("Enter the Number");
    cout << ("%d",&n);
    cout <<("Prime Numbers are: \n");
    for(i=1; i<=n; i++)
    {
        fact=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                fact++;
        }
        if(fact==2)
            printf("%d " ,i);
    }

 return 0;

}






