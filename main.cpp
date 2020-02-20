#include <iostream>
#include <fstream>
using namespace std;

int main()
{
     int N,i,j;
    ifstream in ("input.txt");
    ofstream out("output.txt");
    in>>N;
    int v[100][100];
    int w[100][100];
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            in>>v[i][j];

        }
    }
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            if(   v[i][j]>v[i][j+1] && (v[i][j]>v[i-1][j+1] || (i-1 < 0))&& v[i][j]>v[i+1][j+1] && (v[i][j]>v[i-1][j] || (i-1 < 0)) && v[i][j]>v[i+1][j]  && (v[i][j]>v[i-1][j-1] || ((i-1 < 0) || (j-1 < 0))) && (v[i][j]>v[i][j-1] || (j-1 < 0))  && (v[i][j]>v[i+1][j-1] || (i-1 < 0)))
                {
                    w[i][j]=1;
                }else {
                w[i][j]=0;
                }
        }
    }
    for(i=0;i<N;i++){
        for (j=0;j<N;j++){
            out<<w[i][j]<<" ";
        }out<<endl;
    }
    return 0;
}
