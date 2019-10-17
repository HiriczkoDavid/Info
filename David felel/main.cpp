#include <iostream>

using namespace std;

int main()
{
     string s1, s2;

    cout << "kerem a beolvasando stringet ";

    getline(cin, s1);
    int elofordul = 0;
    size_t hely;
    hely = s1.find("a");
    if (hely != string::npos)

    {

        s1.replace(hely, 1, "A");

    }

      while(hely!=string::npos)

    {

        hely= s1.find("a", hely+1);

        if (hely != string::npos)
	{
		s1.replace(hely, 1, "A");
        }

    }

    cout << s1 << endl;










   return 0;
}
