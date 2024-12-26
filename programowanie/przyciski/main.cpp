#include <bits/stdc++.h>
using namespace std;

const int MAX_PRZYCISKOW = 1000010;
int wartosci_przyciskow[MAX_PRZYCISKOW];

int main(){
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);

 int liczba_przyciskow, liczba_operacji;
 int max_poprzedni, max_nastepny;
 int aktualny_przycisk;
 int i;

 cin >> liczba_przyciskow;
 cin >> liczba_operacji;

 max_poprzedni = max_nastepny = 0;
 for (i=1; i<=liczba_operacji; ++i){
    cin >> aktualny_przycisk;
    if (aktualny_przycisk > liczba_przyciskow){
       max_poprzedni = max_nastepny;
       continue;
    }
    if ( wartosci_przyciskow[aktualny_przycisk] < max_poprzedni )
       wartosci_przyciskow[aktualny_przycisk] = max_poprzedni;
    ++wartosci_przyciskow[aktualny_przycisk];
    max_nastepny = max(max_nastepny,wartosci_przyciskow[aktualny_przycisk]);
 }

 for (i=1; i<=liczba_przyciskow; ++i)
    if ( wartosci_przyciskow[i] > max_poprzedni )
       cout << wartosci_przyciskow[i] << " ";
    else
       cout << max_poprzedni << " ";
 cout << "\n";

 return 0;
}
