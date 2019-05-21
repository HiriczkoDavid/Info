#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    int n,i,j,aux,v[100],y,x,z,p;
    ifstream in ("input.txt") ;
    ofstream out ("output.txt") ;
    in >> n;
    for (i=0;i<n;i++) {
        in >> v[i];
    }
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++){
            if (v[i]>v[j]) {
                aux=v[j];
                v[j]=v[i];
                v[i]=aux;
                 }
        }
    }

    p=v[1]*v[n-1];
    while (p>0) {
        x=p%10;
        y=y*10+x;
        p=p/10;
    }
     out << y;







































    return 0;
}
