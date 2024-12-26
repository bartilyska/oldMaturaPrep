#include <iostream>

using namespace std;

int main()
{
   int t;
   cin>>t;
   float licznik[t];
   float mianownik[t];
   for(int i=0;i<t;i++)
   {
       cin>>licznik[i];
       cin>>mianownik[i];
   }
   float licziloraz[t],mianiloraz[t];
   for(int i=1;i<t;i++)
   {
        licziloraz[i]=licznik[i]/licznik[i-1];
        mianiloraz[i]=mianownik[i]/mianownik[i-1];
   }
   int maxi=0,dlugosc=2;
   for(int i=1;i<t;i++)
   {
        float x=licziloraz[i]/mianiloraz[i];
        float y=licziloraz[i+1]/mianiloraz[i+1];
       if(x==y)
       {
          dlugosc++;
       if(maxi<dlugosc)
        maxi=dlugosc;
       }
       else{
        dlugosc=2;
       }
   }
   if(maxi>=3)
   cout<<maxi;
   else cout<<"BRAK";
    return 0;
}
