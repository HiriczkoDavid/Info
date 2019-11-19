#include <iostream>

using namespace std;
char c,x;
int main()
{
    while (cin>>c)
    {
        if ((c!=' ' and c>='a' and c<='m') or (c!=' ' and c>='A' and c<='M'))
        {
            x=c+13;
            cout<<x;
        }
        else if ((c!=' ' and c>='m' and c<='z') or (c!=' ' and c>='M' and c<='Z'))
        {
            x=c-13;
            cout<<x;
        }
        else if(c==32) cout<<" ";
    }
}
