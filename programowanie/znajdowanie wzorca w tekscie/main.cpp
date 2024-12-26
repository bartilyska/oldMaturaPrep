#include <iostream>
#include <fstream>
using namespace std;
//niepe³ne***

int main()
{
    ifstream plik;
    plik.open("slowa.txt");
    string slowo[1001][3];
    int wiersze=0;   //wiersze w ktorych pierwszy wyraz bedzie wzorcem drugiego
    //wczytywanie
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=2;j++)
        {
            plik>>slowo[i][j];
        }
    }
    //zad (slowo 1 ma byc wzorcem drugiego)
    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=2;j=j+2)
        {
            int dl1=slowo[i][j].length();
            int dl2=slowo[i][j+1].length();
            for(int k=0;k<=dl2-dl1;k++)
            {
                ok=1;
                for(int l=0;l<dl1;l++)
                {

                }
            }

        }
    }
    cout<<wiersze<<endl;

    return 0;
}
