#include <iostream>

using namespace std;
int osztas (int x) {
if (x==0){
    return 1;
}
return x%10/osztas(x*10) ; }
int main()
{

    return 0;
}
