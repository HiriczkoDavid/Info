#include <iostream>

using namespace std;

int lnko (int a, int b) {
 while (a!=b) {
    if (a>b) {
        a=a-b ;
    }
    else {
        b=b-a;
    }
 }
 return a;
}
int main()
{
   cout << lnko(18,2) << endl;
   cout << lnko(2,18) << endl;
   cout << lnko(6,9) << endl;

    return 0;
}
