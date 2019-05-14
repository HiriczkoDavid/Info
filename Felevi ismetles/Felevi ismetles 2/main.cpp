#include <iostream>

using namespace std;

int main()
{
   int x ,n,i,v[10000];
   ifstream in ("bac.in");
   bool beszurva=false;
   in >> n;
   in >> x;
   for (i=0;i<n;i++) {
    in >> v[i];
   }
   for (i=0;i<n;i++) {
    if ((v[i]<x) && (x<v[i+1])) {
        cout << i+2;
        beszurva=true;
    }
   }
   if (!beszurva){
    cout << "nem lehet" ;
   }








    return 0;
}
