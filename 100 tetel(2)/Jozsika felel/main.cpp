#include <iostream>
#include <string>

using namespace std;

int main()
{


   string s1, s2 ;
    cout << "kerem a beolvasando stringet ";

      getline(cin, s1);


   for (int i=0; i<s1.length(); i++) {

        if (s1[i]=='a') {
            s1.replace(i,1,"aA");
        }
        if (s1[i]=='u') {
            s1.replace(i,1,"uU") ;

         }
         if (s1[i]=='e') {
            s1.replace(i,1,"eE") ;
         }
   }

    cout << s1 << endl;

    return 0;
}
