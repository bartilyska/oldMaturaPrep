#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main()
{
    int n=2000;
    float tab[n][3];
    ifstream plik("okregi.txt");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            plik>>tab[i][j];
        }

    }
    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<tab[i][j]<<" ";
        }
        cout<<endl;
    }*/
    int pierwsza=0,druga=0,trzecia=0,czwarta=0,inne;
    for(int i=0;i<n;i++)
    {
        if(tab[i][0]>0 && tab[i][1]>0 && tab[i][0]-tab[i][2]>0 && tab[i][1]-tab[i][0]>0)
            pierwsza++;
        else if(tab[i][0]<0 && tab[i][1]>0 && tab[i][0]+tab[i][2]<0 && tab[i][1]-tab[i][0]>0)
            druga++;
        else if(tab[i][0]<0 && tab[i][1]<0 && tab[i][0]+tab[i][2]<0 && tab[i][1]+tab[i][0]<0)
            trzecia++;
        else if(tab[i][0]>0 && tab[i][1]<0 && tab[i][0]-tab[i][2]>0 && tab[i][1]+tab[i][0]<0)
            czwarta++;

    }
    inne=n-pierwsza-druga-trzecia-czwarta;
    cout<<pierwsza<<" "<<druga<<" "<<trzecia<<" "<<czwarta<<" "<<inne<<endl;
    //zad2
    int lustro=0;
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
        if(tab[i][0]==tab[k][0] && tab[i][1]==-tab[k][1] && tab[i][2]==tab[k][2])
        lustro++;
        if(tab[i][0]==-tab[k][0] && tab[i][1]==tab[k][1] && tab[i][2]==tab[k][2])
        lustro++;
        }
    }
    cout<<lustro<<endl;
    //zad3
    int prostopadle;
    for(int i=0;i<n-1;i++)
    {
        for(int k=i+1;k<n;k++)
        {
        if(tab[i][0]==tab[k][1] && tab[i][1]==-tab[k][0] && tab[i][2]==tab[k][2])
        prostopadle++;
        if(tab[i][0]==-tab[k][1] && tab[i][1]==tab[k][0] && tab[i][2]==tab[k][2])
        prostopadle++;
        }
    }
    cout<<prostopadle<<endl;
    //zad4
    int lancuch=1,makslancuch=-1;
    for(int i=0;i<999;i++)
    {
        if(sqrt((tab[i][0]-tab[i+1][0])*(tab[i][0]-tab[i+1][0])+(tab[i][1]-tab[i+1][1])*(tab[i][1]-tab[i+1][1]))<tab[i][2]+tab[i+1][2])
         {
             lancuch++;
             if(makslancuch<lancuch)
                makslancuch=lancuch;
         }
        else
        {
            cout<<lancuch<<endl;
            lancuch=1;
        }
    }
    if(lancuch>1)
        cout<<lancuch<<endl;
    cout<<"Najdl  "<<makslancuch<<endl;
    return 0;
}
