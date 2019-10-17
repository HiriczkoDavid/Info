#include <iostream>
#include <string>
using namespace std;

int main()
{
  int n,k;
  string tomb[20];
  cin >> n;
  for (int i=0; i<n; i++) {
    cin >> tomb[i];
  }
  cin >> k;
  for (int i=0; i<n; i++) {
    if (tomb[i].length() == k) {
        cout << tomb[i] << endl;
    }
  }
   for (int i=0; i<n; i++) {
    if (tomb[i].length() == k) {
        cout << tomb[i] << endl;
    }
  }





    return 0;
}
