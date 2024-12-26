#include <bits/stdc++.h>
using namespace std;

const int MAX_DLUGOSC_OGRODU = 1e6+7;
long long int ile_par_do_tego_miejsca [MAX_DLUGOSC_OGRODU];
long long int ile_nasturcji_od_1 [MAX_DLUGOSC_OGRODU];
long long int ile_rudbekii_od_1 [MAX_DLUGOSC_OGRODU];

int main() {
 string kwiaty;
 int ile_kwiatow, ile_pytan;
 int odkad, dokad;
 int ile_rudbekii;
 int i;
 long long int odpowiedz, ile_par_pomiedzy;

 cin >> ile_kwiatow;
 cin >> kwiaty;

 kwiaty = " " + kwiaty;

 for (i=1; i<=ile_kwiatow; ++i) {
    ile_nasturcji_od_1[i] = ile_nasturcji_od_1[i-1];
    if ( kwiaty[i] == 'N' )
       ++ile_nasturcji_od_1[i];
 }

 for (i=1; i<=ile_kwiatow; ++i) {
    ile_rudbekii_od_1[i] = ile_rudbekii_od_1[i-1];
    if ( kwiaty[i] == 'R' )
       ++ile_rudbekii_od_1[i];
 }

 for (i=1; i<=ile_kwiatow; ++i) {
    ile_par_do_tego_miejsca[i] = ile_par_do_tego_miejsca[i-1];
    if ( kwiaty[i] == 'N' )
       ile_par_do_tego_miejsca[i] = ile_par_do_tego_miejsca[i] + ile_rudbekii_od_1[i];
 }

 cin >> ile_pytan;
 for (i=1; i<=ile_pytan; ++i) {
 	cin >> odkad;
 	cin >> dokad;

 	ile_par_pomiedzy = ile_rudbekii_od_1[odkad-1] *
	                   (ile_nasturcji_od_1[dokad] - ile_nasturcji_od_1[odkad-1]);
 	odpowiedz = ile_par_do_tego_miejsca[dokad] - ile_par_do_tego_miejsca[odkad-1]
 	            - ile_par_pomiedzy;
 	cout << odpowiedz << "\n";
 }
 return 0;
}
