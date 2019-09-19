#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int n, maximum = 0, minimum = 1000;
    ifstream in ("in.txt");
    ofstream out ("out.txt");
    in >> n;
    int  v[n];
    for (int i = 0; i < n ; i++){
        in >> v[i];
        if(v[i]>maximum)
            maximum = v[i];
        if(v[i]<minimum)
            minimum = v[i];
    }

    int x = 1;

   while(minimum/x > 0){
        x *= 10;
   }


   cout << maximum * x + minimum;

    out << maximum * x + minimum;










    return 0;
}
