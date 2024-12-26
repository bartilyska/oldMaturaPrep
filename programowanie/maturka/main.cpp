#include <iostream>
#include <fstream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ifstream plik("zwierzeta.txt");
    string nazwa[50];
    int tab[50][5];
    for(int i=0;i<50;i++)
    {
        plik>>nazwa[i];
        for(int j=0;j<5;j++)
        {
            plik>>tab[i][j];
        }
    }
    vector <string> nazwy;
    for(int i=0;i<50;i++)
    {
        float p=sqrt(pow(1-tab[i][0],2)+pow(3-tab[i][1],2)+pow(2-tab[i][2],2)+pow(2-tab[i][3],2)+pow(3-tab[i][4],2));
        cout<<nazwa[i]<<" "<<i+1<<" "<<fixed<<setprecision(2)<<p<<endl;
        if(p==1)
            nazwy.push_back(nazwa[i]);
    }
    sort(nazwy.begin(),nazwy.end());
    for(int i=0;i<nazwy.size();i++)
    {
        cout<<nazwy[i]<<endl;
    }
    cout<<"zad3"<<endl<<endl;
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            for(int k=1;k<=3;k++)
            {
                for(int l=1;l<=3;l++)
                {
                    for(int m=1;m<=3;m++)
                    {
                        int licznik=0;
                        for(int q=0;q<50;q++)
                        {
                            if(i==tab[q][0] && j==tab[q][1] && k==tab[q][2] && l==tab[q][3] && m==tab[q][4])
                                licznik++;
                        }
                                    if(licznik>1)
                                    {
                                    for(int q=0;q<50;q++)
                                    {
                                        if(i==tab[q][0] && j==tab[q][1] && k==tab[q][2] && l==tab[q][3] && m==tab[q][4])
                                            cout<<nazwa[q]<<" ";
                                    }
                                    cout<<endl;
                                    }
                    }
                }
            }
        }
    }
        return 0;
}
