#include <iostream>

using namespace std;
int pascal (int sor, int oszlop) {
   if (oszlop < 0 || oszlop > sor) { return 0;}
   if (sor==0 || sor == 1) {return 1;}
   return pascal(sor-1, oszlop-1) + pascal(sor-1, oszlop) ;
}

int main()
{
    int n;
    cout << "hanyadik sort szeretned?" << endl;
    cin >> n;
    for (int i=0; i<n+1; i++) {
        cout << pascal(n,i) << " " ;
    }

    cout << endl;


    return 0;
}
