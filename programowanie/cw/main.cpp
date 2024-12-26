#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int N=7;
int tab[N]= {1,16,18,3,16,9,9};
void wypisz()
{
    for (int i=0;i<N ; i++)
        cout<< tab[i]<< " ";
    cout<<endl;
}
void babelek()
{
    for (int i=0; i<N-1;i++)
        if (tab[i]>tab[i+1]) swap (tab[i], tab[i+1]);
}


int main()
{
    wypisz();
    babelek();
    wypisz();


    return 0;
}
