#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int N=805;
    string tab[N];
   ifstream plik("tekst.txt");
   ifstream pliczek("probka.txt");
   /*for(int i=0;i<N;i++)
   {
       plik>>tab[i];
       int x=tab[i].length();
       if(tab[i][0]=='d' && tab[i][x-1]=='d')
        cout<<tab[i]<<endl;
   }
   const int A=5,B=2;
   for(int i=0;i<N;i++)
   {
       if(tab[i].length()>=10)
       {
           for(int j=0;j<tab[i].length();j++)
           {
               tab[i][j]=(((tab[i][j]-'a')*A+B)%26)+'a';
           }
        cout<<tab[i]<<endl;
       }
   }*/
   string s1[5],s2[5];
   for(int i=0;i<5;i++)
   {
       pliczek>>s1[i]>>s2[i];
   }
   for(int i=0;i<5;i++)
   {
       int tab[25][25]={0};
      for(int j=0;j<s1[i].length();j++)
      {
          int a=0,b=0;
          for(int n=0;n<=25;n++)
          {
              for(int m=0;m<=25;m++)
              {
                  if(((s2[i][j]-'a')*a+b)%26+'a'==s1[i][j])
                  {
                      {
                          tab[a][b]++;
                          if(tab[a][b]==s1[i].length())
                            cout<<a<<" "<<b<<endl;
                      }
                  }
                  b++;
              }
              a++;
              b=0;
          }
      }
   }
   // czemu nie dziala dla slowa 3?
    return 0;
}
