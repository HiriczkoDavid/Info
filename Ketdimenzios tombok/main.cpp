#include <iostream>

using namespace std;

int main()
{

    int N,M,i,j;
    cout <<"N=";
    cin >> N ;
    cout << "M=";
    cin >> M;
    int matrix [N][M];
    for (int i=0; i<N; i++ ) {
      for (int j=0; j<M; j++) {
        cout << "matrix["<< i << "]["<< j << "]=" ;
        cin >> matrix [i][j] ;
      }
    }
    for ( int i=0; i<N; i++) {
        for ( int j=0; j<M; j++) {
            cout << matrix [i][j] ;
        }
        cout << endl;
    }



















    return 0;
}
