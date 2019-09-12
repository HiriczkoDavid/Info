#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{

  int v[100], n,i,j,p=1;
  cout << "n=";
  cin >> n;
  for (i=0; i<n; i++)  {
    v[i]=rand()%100;
  }
  do {
    bool csere=false ;
    for (i=0; i<n-p; i++) {
        if (v[i]>v[i+1]) {
            csere=true;
            swap (v[i]; v[i+1]) ;
        }
    }
    p++;
  }
   while (csere) ;
   for (i=0; i<n; i++) {
    cout << v[i] << endl;
    }



















    return 0;
}
