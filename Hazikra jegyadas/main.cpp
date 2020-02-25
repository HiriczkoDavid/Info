#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     int x,y,z,a,n,i,osszeg=0,k=0;
   ifstream in ("input.txt") ;
   ofstream out ("prim.txt") ;
   ofstream pal ("pallindrom.out") ;
   ofstream dat ("tokeletes.dat") ;
   while(in >> n){k=0;
   osszeg=0;

   for (i=1; i<=n/2; i++) {
    if (n%i==0) {
        osszeg=osszeg+i;
    }
   }
   if (osszeg==n) {
    dat << n <<" ";
   }
   if (n==2) {
    out << n;
   }

   for (i=2; i<=n/2; i++) {
    if (n%i==0) {
        k=k+1;
    }
   }
   if (k==0) {
    out << n<<" ";
   }

   a=n;
   y=0;
   while (n>0) {
    z=n%10;
    y=y*10+z;
    n=n/10;
   }
   if (a==y) {
    pal << a<<" ";
   }
   }
    return 0;
}
