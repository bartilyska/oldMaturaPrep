#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream plik ("liczby.txt");
  string napis [1000];
  for(int i=0;i<1000;i++)
  {
      plik>>napis[i];
  }
  //4.1
  int wiecej_zer=0;
  for(int i=0;i<1000;i++)
  {
      int licznik1=0,licznik0=0;
      int dl=napis[i].length();
      for(int j=0;j<dl;j++)
      {
          if(napis[i][j]=='1') licznik1++;
          if(napis[i][j]=='0') licznik0++;
      }
      if(licznik0>licznik1) wiecej_zer++;
  }
  cout<<"4,1: "<<wiecej_zer<<endl;
  //4.2
  int podzielna_2=0,podzielna_8=0;
    for(int i=0;i<1000;i++)
    {
        int dlugosc=napis[i].length();
        if(napis[i][dlugosc-1]=='0') podzielna_2++;
        if(napis[i][dlugosc-1]=='0' && napis[i][dlugosc-2]=='0'&& napis[i][dlugosc-3]=='0')
            podzielna_8++;
    }
    cout<<"4.2: "<<"Podzielne na 2: "<<podzielna_2<<endl;
    cout<<"Podzielna na 8: "<<podzielna_8<<endl;
    //4.3

    return 0;
}
