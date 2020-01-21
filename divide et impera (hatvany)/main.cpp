#include <iostream>
#include <stdlib.h>
#include <stdio.h>

int hatvany(int a, int k) {
 if(k==1) {return a; }
 int x;
 x=hatvany(a,k/2) ;
 x=x*x;
 if (k%2!=0) {
    x=x*a;
 }
 return x;
}

using namespace std;

int main()
{

    return 0;
}
