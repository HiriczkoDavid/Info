#include <iostream>
#include <stdlib.h>

using namespace std;
int min(int bal,int jobb,int v[]) {
 if (bal==jobb) {return v[jobb];}
 int m=(bal+jobb)/2;
 int min1=min(bal,m,v);
 int min2=min(m+1,jobb,v);
 if(min1<min2) {return min1;}
 return min2;
}

int main()
{
    int i,n=50000;
    int v[n];
    for (i=0; i<n; i++) {
        v[i]=rand() ;
    }
    cout << min (0,n ,v) ;

    return 0;
}
