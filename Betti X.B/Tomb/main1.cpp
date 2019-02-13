#include <iostream>

using namespace std;

int main()
{

    int n,v[100],i;
    cin >> n;
    for (i=0;i<n;i++)  {
        cout << "v[" << i << "]=" ;
        cin >> v[i];
    }
    for (i=0;i<n;i++)  {
        cout << v[i]<<" " ;

    }




    return 0;
}
