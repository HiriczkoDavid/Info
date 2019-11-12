#include <iostream>

using namespace std;
 long paratlan (long n) ;

long paratlan(long n){

  if (n==0) {return 0;}

  return n*paratlan(n-1);

}
 long paratlan(long n){

  if (n==1) {return 1;}long paratlan(long n){

  if (n==0) {return 0;}

  return n*paros(n-1);

}


  return n*paratlan(n-1);

}


int main()
{

    long n;

    cout << "kerem a szamot" << endl;

    cin >> n;
    if (n%2==0)
 {
     cout << "az osszeg" << paros(n) ;

 }
 else {
    cout << "az osszeg" << paratlan(n) ;
 }

    return 0;
}
