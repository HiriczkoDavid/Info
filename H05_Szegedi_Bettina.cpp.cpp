#include <iostream>

using namespace std;
int n(int k) {
    if(k==0)
    return 0;
    return 2*n(k-1)+1;
   }

int main()
{
   int k;
   cin >> k;
   cout << n(k) ;


    return 0;
}
