#include <iostream>

using namespace std;
void inserare (int & n) {
    int usz=0, hatv=1;
    int prev= n%10;
    n=n/10;
    usz=prev*hatv;
    hatv=hatv*10;
    while (n>0) {
        int c=n%10;
        n=n/10;
     int  diff =(prev-c) ;
     if (diff <0) {
        diff=-diff;
     }
     usz=diff*hatv;
     hatv=hatv*10;
     usz=c*hatv;
     hatv=hatv*10;
     prev=c;
    }
    n=usz;
}

int main()
{






    return 0;
}
