#include <iostream>

using namespace std;
int min(int a, int b) {
    if(a>b) {
        return b;
    }
    return a;
}
int minszamjegy(int k) {
    if(k==0) {
        return 10;
    }
    return min(k%10,minszamjegy(k/10)) ;
}
int main()
{

   cout << minszamjegy(256789) << endl;


    return 0;
}
