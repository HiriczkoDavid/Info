#include <iostream>
#include <fstream>
using namespace std;

int main()
{

   int n,v[100],i=0,a;
   ifstream in ("input.txt.") ;
   ofstream out ("output.txt") ;
   in >> n;
   for (i=0; i<n; i++) {
    in >> v[i] ;
   }
   while (in >> a) {
    v[i]=a;
    i++ ;
   }

   for (i=0; i<n; i++) {
    in >> v[i];
    out <<v[i] << " " << v[i]/2 << endl;
   }













    return 0;
}
