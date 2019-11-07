#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("royfloyd.in");
ofstream fout("royfloyd.out");

int N, a[105][105];

int main() {
    fin >> N;
    for(int i = 1; i <= N; ++i)
        for(int j = 1; j <= N; ++j)
            fin >> a[i][j];
    for(int k = 1; k <= N; ++k)
        for(int i = 1; i <= N; ++i)
            for(int j = 1; j <= N; ++j)
                if(i != j && a[i][k]&& a[k][j] && (a[i][j] > a[i][k] + a[k][j] || a[i][j] == 0))
                   a[i][j] = a[i][k] + a[k][j];
    for(int i = 1; i <= N; ++i) {
        for(int j = 1; j <= N; ++j)
            fout << a[i][j] << " ";
        fout << "\n";
    }
}
