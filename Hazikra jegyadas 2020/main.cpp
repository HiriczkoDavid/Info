#include <iostream>
#include <fstream>
using namespace std;
int lkkt(int bal,int jobb,int v[])
{
   if (bal==jobb)
    {
        return v[jobb];
    }
    int m=(bal+jobb)/2;
    int lkkt1=lkkt(bal,m,v);
    int lkkt2=lkkt(m+1,jobb,v);
    int c = lkkt1*lkkt2;
    while(lkkt1!=lkkt2)
   {
      if(lkkt1>lkkt2)
      {
          lkkt1=lkkt1-lkkt2;
      }
      else
      {
          lkkt2=lkkt2-lkkt1;
      }

   }
   int lkkt3=c/lkkt1;

   return lkkt3;
}

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    in >> n;
    int v[n];

    for(int i=0;i<n;i++)
    {
        in >> v[i];

    }
    int x = lkkt(0,n-1,v);

    out<<x<<endl;
    int s=0;
    while (x!=0) {
      int y=x%10;
      x/=10;
      s+=y;
    }
    out<<s;

    return 0;
}
