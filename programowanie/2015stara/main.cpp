#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    int n,x,licznik=0,zycia=2;
    string slowo;
    ifstream plik("slowa.txt");
    for(int i=1;i<=1000;i++)
    {
        plik>>slowo;
       for(int j=0;j<slowo.length()-1;j++)
       {
           if(slowo[j]!=slowo[j+1])
            zycia--;
       }
       if(zycia>0)
       {
           licznik++;
       }
    }
    cout<<licznik<<endl;


    return 0;
}
