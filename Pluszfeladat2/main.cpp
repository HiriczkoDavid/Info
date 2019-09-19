#include <iostream>
#include <fstream>


using namespace std;

int main()
{

   int max,maxpoz,i,a;
   ifstream in ("bac.txt") ;
   in >> a;
   max=a;
   maxpoz=1;
   i=1;
   cout << a << " " ;
   while (in>>a) {
    if (a>max) {
        maxpoz=i;
        max = a;
        cout << a << " " ;
    }else if(a==max){
        if (maxpoz==i-1){
            cout << a << " " ;
            maxpoz=i;
        }
   }
   i++;
   }
















    return 0;
}
