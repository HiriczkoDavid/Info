#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "kerem az elso stringet" ;
    getline (cin, s1) ;
    cout << "kerem a masodik stringet" ;
    getline (cin, s2) ;
    size_t hely=s2.find (" ") ;
    s1.append (s2,0,hely) ;
    cout << s1 << endl;












    return 0;
}
