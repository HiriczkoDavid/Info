#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1, s2;
    int e,a,i,o,u,p, hely;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);

    {

    int elofordul = 0;

    size_t hely;

    hely = s1.find("a,e,i,u,o");


    if (hely != string::npos) {

        s1.replace(hely, 1, "mpm"); }

    }
     for (int i=0; i<s1.length(); i++) {

        if (s1[i]=='a') {
            s1.replace(i,1,"mpm");
        }
        if (s1[i]=='e') {
            s1.replace(i,1,"mpm") ;

         }
         if (s1[i]=='u') {
            s1.replace(i,1,"mpm") ;
         }
         if (s1[i]=='o') {
            s1.replace(i,1,"mpm") ;

            }
            if (s1[i]=='i') {
            s1.replace(i,1,"mpm") ;

            }
            if (s1[i]=='p') {
            s1.replace(i,1,"pZ") ;

            }

            }

    cout << s1 << endl;

    return 0;
}
