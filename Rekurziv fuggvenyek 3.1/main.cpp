#include <iostream>

using namespace std;
int osszeg (int x) {
   if (x==0) {
    return 0;
   }
   return x%10 + osszeg(x/10) ;
}

int main()
{





    return 0;
}
