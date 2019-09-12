#include <iostream>
#include <stdlib.h>
using namespace std;

int main ()
{

   int v[100],i,j,n,aux;
   cout << "n=";
   cin >> n;
   for (i=0;i<n;i++) {
    v[i]=rand()%100;
   }
   for  (i=0;i<n-1;i++) {
    for (j=i+1;j<n;j++) {
    if (v[i]>v[j]) {
        aux=v[j];
        v[j]=v[i];
        v[i]=aux;


        }
    }
   }
   for (i=0; i<n; i++) {
    cout << v[i] << endl;
   }


    return 0;
}
