#include <iostream>

using namespace std;
bool prim(long n, long i){


    if (i>(n/2+1)){

        return true;
    }

    if (n%i == 0){

        return false;
    }

    return prim(n, i+1);

}
int main()
{
int a,o=2,szam=0;
cout << "Add meg a szamot=";
cin >> a;

while(o<a){
   if(a % o != 0 ){


   }
   if(a % o == 0 ){
    szam=1;

   }
o++;
}
    if(szam==0){
        cout <<"A szam prim";
    }
    else{
        cout <<"A szam nem prim";
    }
    return 0;
}
