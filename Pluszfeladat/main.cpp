#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int sum=0, k,db=0;
    int legnagyobbosszeg = -104;

    ifstream inszalagszakadas("titu2019.in");

    while(!inszalagszakadas.eof()){
        inszalagszakadas >> k;
        if(sum+k<0){
            if(sum>legnagyobbosszeg && db>1){
                legnagyobbosszeg = sum;
            }
            sum = 0;
            db =0;
        }else{db++;}
        sum +=k;

    }

    cout << legnagyobbosszeg;


















    return 0;
}
