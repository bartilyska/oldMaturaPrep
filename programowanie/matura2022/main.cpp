#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string tablica[200];
    ifstream plik("liczby.txt");
    ifstream pliczek("przyklad.txt");
    int licznik=0;
    bool czy1=0;
    string pierwsza;
    for(int i=0;i<200;i++)
    {
        plik>>tablica[i];
        if(tablica[i][0]==tablica[i][tablica[i].length()-1])
        {
            licznik++;
            if(czy1==0)
            {
                pierwsza=tablica[i];
                czy1=1;
            }
        }
    }
    cout<<"4.1:"<<endl;
    cout<<licznik<<" "<<pierwsza<<endl;
    pliczek.close();
    plik.close();
    return 0;
}
