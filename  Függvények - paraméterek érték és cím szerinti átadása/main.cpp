#include <iostream>
using namespace std;
int a,b;
int lnko() {
    int a1=a;
    int b1=b;
    while (a1!=b1) {
        if (a1>b1) {
            a1=a1-b1;
        }
        else {
            b1=b1-a1;
        }
    }
    return a1;
  }
   int lkkt () {
    return a*b/lnko() ;
   }
using namespace std;

int main()
{
     a=2;
     b=3;
    cout << lnko () << endl;
    cout << lkkt () << endl;



    return 0;
}
