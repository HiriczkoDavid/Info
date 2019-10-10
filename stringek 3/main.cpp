#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1, s2 = " " ;
    cout << "kerem a beolvasando stringet" ;
    getline (cin, s1) ;
    int elofordul=1;
    size_t hely ;
    hely=s1.find(s2) ;
    while (hely!=string::npos) {
        elofordul++ ;
        hely=s1.find(s2, hely+1) ;
    }

    cout << elofordul << endl ;





    return 0;
}
