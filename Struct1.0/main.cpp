#include <iostream>

using namespace std;
 struct diak {
  int azonosito;
  double media;
  string nev;
  string osztaly;

} diakok[1000];

int main()
{
   int max;
   int n;
   ifstream input ("input.txt" ) ;
   input >> n;
   for (int i=0; i<n; i++) {
    input >> diakok[i].azonosito;
    input >> diakok[i].nev;
    input >> diakok[i].osztaly;
    input >> diakok[i].media;
    if (i==0) {
        max = diakok[i].media;l
    }
    if (diakok[i].media>max) {
    max= diakok[i].media;}
   }
   cout <<max << endl;

    return 0;
}
