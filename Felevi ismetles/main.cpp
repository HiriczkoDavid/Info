#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i=2,n=10000,a,y,z;
    int v[n];
    ofstream out ("bac.txt" );
    v[1]=0;
    v[2]=3;
    cin >> x;
    cin >> y;
    while (v[1]<y) {
        i=i+1;
        v[i]=2*v[i-1]-v[i-2]+2;
    }

    a=1;
    for (i=n; i>0; i--) {
        cout << v[i]<< " " ;

    }





    return 0;
}
