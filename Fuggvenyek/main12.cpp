#include <iostream>

using namespace std;

bool prime(int x) {
for (int i=2; i<x/2 +1; i++) {
    if (x%i==0) {
        return false;
    }}

     return true;
}
bool pallindrom (int x) {
int d=0, a=x;
while (x>0) {
    int c=a%10;
    d=d*10+c;
    a=a/10;
}
    if (a==d) {
        return true ;
    } else {
    return false;}

}

int main()
{
    if (prim(2)) {
        cout << "a szam prim " << endl;
    } else {
     cout << "a szam nem prim" <<endl ; }

     if (pallindrom(12)) {
        cout << "a szam pallindrom" << endl;
     } else {
     cout << " a szam nem pallindrom" <<endl;  }





    return 0;
}
