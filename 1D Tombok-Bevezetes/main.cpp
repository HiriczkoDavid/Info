#include <iostream>

using namespace std;

int main()
{
   int n,m,v[1000],i,S=0;
  cout << "n=";
  cin >> n;
  cout << "m=";
  cin >> m;
     for(int i=0; i<n; i++)
    {
        cout << "v[" << i << "]= ";
        cin >> v[i];
    }

    for(int i=0; i<n; i++){
        m=m*10/n; }
    for (int i=0; i<n; i++) {
        S+=v[i];
    }
    for (int i=0; i<n; i++) {
        S=S*v[i];
    }
     cout << "S=" << S;
      for(int i=0; i<n; i++)
    {
        cout << "v[" << i << "]= ";
        cin >> v[i];













    return 0;
}
