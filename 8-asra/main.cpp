#include <iostream>

using namespace std;
 int torzstenyezo ( int szam ,int oszto, int hatvany) {

  while (szam>1) {
     while (szam%oszto==0) {
        szam=szam/oszto;
        hatvany=hatvany+1;
       oszto=oszto+1;
    }

  }

    return 0;
  }


int main()
{
    cout << (16,2) << endl;
    return 0;
}



