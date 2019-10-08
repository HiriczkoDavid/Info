#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n;
    ifstream in("input.in");

    in >> n;

   int tomb[n][n];

   for(int i = 0; i < n ; i++){
    for(int j = 0 ; j < n ; j++){
        in >> tomb[i][j];
    }
   }

    int sor = 1;
    int oszlop = 1;

    for(int i = 1; i <= sor ; i++){
            if(tomb[i-1][0] == tomb[i][0]){
                sor++;
            }else{
                break;
            }
    }
    for(int j = 1; j < n ; j++){
            if(tomb[0][j-1] == tomb[0][j]){
                oszlop++;
            }else{
                break;
            }
    }


    if(sor >= oszlop) {
        for(int i = 0 ; i < )
    }








    return 0;
}
