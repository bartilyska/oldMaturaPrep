#include <iostream>

using namespace std;
int n,i=2,k;

int main()
{
   do
   {

    cout<<"Podaj n wieksze od 1:";
    cin>>n;

   while(n%i!=0 && i<=n)
    i++;
   if (i<n)
      cout<<n<<" jest liczba zlozona"<<endl;
else
    cout<<n<< "jest liczba pierwsza"<<endl;

    cout<< "Wprowadzasz nowa liczbe? 1-TAK. dowolny klawisz-NIE";
    cin>>k;
    i=2;
     }
    while (k==1);
    cout<<endl<<"koniec programu";

    return 0;
}
