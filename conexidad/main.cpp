#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("conexidad.in");
    ofstream out("conexidad.out");
    int n,m;
    int a,b;
    in >> n >> m;

    bool nbr[n+1][n+1] = {0};
    int extra[n+1] = {0};

    for(int i = 0 ; i < m ; i++)
    {
        in >> a >> b;
        nbr[a][b] = 1;
        nbr[b][a] = 1;
    }

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= n ; j++)
        {
            extra[i] += nbr[i][j];
        }
    }

    return 0;
}
