#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s1, s2;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);

    cout << "Kerem a keresendo stringet";

    cin >> s2;

    int elofordul = 0;

    size_t hely;



    //megkeresi az elso helyet, ahol az s2 string elofordul

    hely = s1.find(s2);

    // ha a string megvan benne, akkor noveljuk az elofordul valtozot

    if (hely != string::npos)

    {

        elofordul++;

    }

    //ciklusosan ismeteljuk a fenti utasitasokat, vigyazva arra, hogy mindig

    //az elozo hely utan talalt helyen keressuk a keresendo stringet

    while(hely!=string::npos)

    {

        hely= s1.find(s2, hely+1);

        if (hely != string::npos)

        {
		elofordul++;
        }
    }



    cout << elofordul << endl;
    return 0;
}
