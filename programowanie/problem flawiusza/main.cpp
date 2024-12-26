#include <iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k; //n liczba osob k do ilu dead
    int tab[n];
    for(int i=0;i<n;i++){
        tab[i]=1; //1 - zyje 0-dead
    }
        int licznik=0,i=0,zycia=n;
        while(zycia>=2){//zeby zostal ostatni
            licznik+=tab[i]; //gdy minie tylu co zyja zabija
            if(licznik==k){
                tab[i]=0;
                licznik=0;
                zycia--;
            }
            i=(i+1)%n; //niewychodzenie za tablice
        }
    for(int i=0;i<n;i++){
        if(tab[i]!=0) cout<<i+1<<endl; //ten co zyje ma numer indeksu tablicy
    }
    return 0;
}
