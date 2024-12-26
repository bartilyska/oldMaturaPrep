#include <bits/stdc++.h>
using namespace std;

const int MAX_LICZBA_WAGONOW = 2e6 + 7;
int cement_w_wagonach [MAX_LICZBA_WAGONOW];

int main() {
 ios_base::sync_with_stdio(0);
 cin.tie(0);
 cout.tie(0);


 int liczba_wagonow, oczekiwana_suma_cementu;
 int akt_suma_cementu, akt_liczba_wagonow;
 int min_liczba_wagonow;
 int poczatek, koniec;
 int i;

 cin >> liczba_wagonow;
 cin >> oczekiwana_suma_cementu;

 for (i=1; i<=liczba_wagonow; ++i)
    cin >> cement_w_wagonach[i];

 if (cement_w_wagonach[1] == oczekiwana_suma_cementu) {
 	cout << 1 << "\n";
 	return 0;
 }

 poczatek = 1;
 koniec = 1;
 akt_liczba_wagonow = 1;
 min_liczba_wagonow = MAX_LICZBA_WAGONOW;
 akt_suma_cementu = cement_w_wagonach[1];
 while (koniec <= liczba_wagonow) {
    if (akt_suma_cementu == oczekiwana_suma_cementu) {
       if (akt_liczba_wagonow < min_liczba_wagonow)
          min_liczba_wagonow = akt_liczba_wagonow;
       ++koniec;
       akt_suma_cementu = akt_suma_cementu + cement_w_wagonach[koniec];
       ++akt_liczba_wagonow;
	}
    if (akt_suma_cementu < oczekiwana_suma_cementu) {
       ++koniec;
       akt_suma_cementu = akt_suma_cementu + cement_w_wagonach[koniec];
       ++akt_liczba_wagonow;
	}
    if (akt_suma_cementu > oczekiwana_suma_cementu) {
       akt_suma_cementu = akt_suma_cementu - cement_w_wagonach[poczatek];
       ++poczatek;
       --akt_liczba_wagonow;
	}
 }

 if (min_liczba_wagonow == MAX_LICZBA_WAGONOW)
    cout << "N\n";
 else
    cout << min_liczba_wagonow << "\n";

 return 0;
}
