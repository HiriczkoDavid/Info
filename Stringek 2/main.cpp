#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{
   string s="   " ;
   int x;
   cin >>x;
   for (int i=0; i<x; i++) {
    s[i]=65+rand()%26;
   }
   s[x]='\n' ;
 for (int i=0; i<x; i++) {
        cout << s[i];
 }
  cout << s << " " ;



    return 0;
}
