#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

   int N,i,j;
   cout << "N=" ;
   cin >> N;
   int matrix[N][N] ;
   for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
       matrix[i][j]=rand()%10;
        if (i>j) {
            matrix[i][j]=-matrix[i][j] ;

        }
        if (i==j) {
            matrix[i][j]=0;
        }
        cout << matrix[i][j] << " " ;
    }
    cout << endl;
   }







    return 0;
}
