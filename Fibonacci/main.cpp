#include <iostream>

using namespace std;

int main()
{
    int k,els,mas,F,i;
    cin >> k;
    if (k==0) {
        F=0;
    }
    else if (k==1) {
        F=1;
    }
    els=0;
    mas=1;
    for (i=2; i<k; i++) {
        F=els+mas;
        els=mas;
        mas=F;
    }
    cout << F;















    return 0;
}
