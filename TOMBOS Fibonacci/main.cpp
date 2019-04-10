#include <iostream>

using namespace std;

int main()
{

     int v[1000],n,i;
     cout << "n=" ;
    cin >> n;
    for ( i=2; i<=n; i++) {
      v[i]=v[i-1] + v[i-2] ;
    }
    for (i=0; i<n; i++) {
       cout << v[i] << " " ;
    }

    cout << endl;
    cout << "A fibonacci sor n. tagja" << v[n] ;














    return 0;


}
