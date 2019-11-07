#include <iostream>

using namespace std;

int MaxImp(int a , int b)
{
    int max = 0;
    for(int i = b ; i >= a ; i--)
    {
        int prod  = i;
       for(int  j = 3 ; j < (i/2) ; j+=2)
       {
           if(i % j == 0){
            prod *= j;
           }
           if(prod > i){
            return max;
           }
       }
    }
    return 0;
}

int Egal(int n)
{
    int np = 0;

    while(n!=0)
    {
        if((n%10)%2 == 1){
            if(np == 0){
                np = n%10;
            }else if(np != n%10){
                return 0;
            }
        }
        n /= 10;
    }
    return 1;
}

int main()
{
    int a,b;

    cin >> a ;

    cout << Egal(a) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
