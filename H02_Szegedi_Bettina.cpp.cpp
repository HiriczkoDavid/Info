#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   int N,i,j,a,b;
   int falatti = 0,ffolotti = 0;

   ifstream in ("input.txt") ;
   ofstream out ("lkkt.out") ;

   in >> N;

   int matrix[N][N] ;

   for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
            in >> matrix [i][j] ;
    if (i<j) {
        ffolotti=ffolotti+matrix[i][j];
    }
    if (i>j) {
        falatti=falatti+matrix[i][j] ;
    }
    }
   }
    a=ffolotti;
    b=falatti;
    while (a!=b) {
        if (a>b) {
            a=a-b;
        }
        if (a<b) {
            b=b-a;
        }
    }

   out << ffolotti*falatti/a;


    return 0;
}
