#include <iostream>
#include <fstream>


using namespace std;
bool van (int v[][100], int x,int y) {
  if (v[x][y]==1) {
    return true;
  }
  return false;
}
 int hany_db( int v[][100], int x,int N) {
   int db=0;
   for (int i=0; i<N+1; i++) {
    db+=v[x][i];
   }
   return db;
 }

int main()
{
    int N;
    ifstream in ("input.txt") ;
    in >> N;
    int v[100][100];
    for (int i=1; i<N+1; i++) {
        for (int j=1; j<N+1; j++) {
            in >> v[i][j] ;
        }
    }
    if (van(v,1,2)) {
        cout << "Van kapcsolataz 1-2 csomopont kozott" << endl;
    }
    cout << hany_db(v,1, N) ;
    return 0;
}
