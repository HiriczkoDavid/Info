#include <iostream>

using namespace std;
int szorzat (int x) {
if (x==0){
    return 1;
}
return x%10*szorzat(x/10) ; }
int main()
{


    return 0;
}
