#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
      ifstream in ("input.txt");
   ofstream v("vezetekes.txt");
   ofstream o("orange.txt");
   ofstream d("digi.txt");
   ofstream vo ("vodafone.txt");
   string s;
    while(in>>s){
        int a=s.size();
        int i=0;
        if(s[i]=='6' && a==6){s.insert(0,"0040260");v<<s;}
        else if (a==7){
            s.insert(0,"00407");
            if(s[5]=='2'){
                vo<<s;
            }else if(s[5]=='4'){
            o<<s;
            }else if (s[5]=='7'){
            d<<s;}
        }s=" ";
    }

         return 0;
}




