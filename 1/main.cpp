#include <iostream>
#include <fstream>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;
ifstream fin("epidemie.in");
ofstream fout("epidemie.out");
int N, R, s[101], viz[101];
vector <int> v[101];
vector <int> :: iterator it;
void dfs(int node, int sens) {
    viz[node] = 1;
    s[node] = sens;
    for(it = v[node].begin(); it != v[node].end(); it++) {
        if(!viz[*it])
            dfs(*it, (-1) * sens);
    }
}
int main() {
    fin >> N >> R;
    int x, y;
    while(fin >> x >> y) {
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(R, 1);
    for(int i = 1; i <= N; i++)
        if(s[i] == 1)fout << "D";
           else fout << "S";
}
