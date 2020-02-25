#include <iostream>

using namespace std;

 int N;

int kontor = 0;

int xlepes[] = {-1,-2,-2,-1,1,2,2,1};
int ylepes[] = {-2,-1,1,2,2,1,-1,-2};

bool lehet(int i, int j,  short board[10][10])
{
    if (board[i][j] > 0) {
        return false;
    }

    if (i<0 || i >= N || j < 0 || j>= N) {
        return false;
    }

    return true;
}



void kiir( short board[10][10])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(board[i][j]/10 == 0)
            {
                cout << " " << board[i][j] << " ";
            }
            else
                cout << board[i][j] << " ";
        }

        cout << endl;
    }
    for (int azaszam = 1; azaszam<=N*N; azaszam++) {
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                if (azaszam==board[i][j])cout << "("<< i << "," << j << ")";

            }

        }
    }
}

bool backtracking(int sor, int oszlop, short board[10][10], int lepes )
{
    if(lepes == N*N)
    {
        kontor++;

        kiir(board);
        cout << endl;

        return true;
    }
    //ha nem, kezdjuk az elso oszloptol, s probaljuk meg lerakni valahova a kovetkezo kiralynot
    for(int i = 0; i < 8; i++)
    {
        //ha le lehet tenni a jelenlegi helyre a kiralynot
        if(lehet(sor+xlepes[i], oszlop+ylepes[i],  board))
        {
            //hozzunk letre egy ideiglenes tablat, amibe atmasoljuk az eddigit
            short tempboard[10][10];
            for(int i = 0; i < N; i++){
                for(int j = 0; j < N; j++){
                    tempboard[i][j] = board[i][j];
                }
            }
            int templepes = lepes + 1;
            //az ideiglenes tablara tegyuk le a kiralynot
            tempboard[sor+xlepes[i]][oszlop+ylepes[i]] = templepes;
            //hivjuk meg a backtraking fuggvenyt a kovetkezo sorra
            if (backtracking(sor+xlepes[i], oszlop+ylepes[i],  tempboard,templepes)) return true;

        }
    }

}



int main()
{  cout<<"N=";
    cin>>N;
    //sakktabla letrehozasa
    short board[10][10];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            board[i][j] = 0;
        }
    }


        int i=0,j=0;
        board[i][j] = 1;
        backtracking(i,j, board, 1);


    return 0;
}
