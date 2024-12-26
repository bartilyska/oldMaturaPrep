#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream plik ("rozgrywka.txt");
    int bitwa=0,wygranabitwa1=0,wygranabitwa2=0,ile1=0,ile2=0;
    for(int i=1;i<=5;i++)
    {
        int ktorzuca,liczbazaj1=0,liczbazaj2=0,oddzialy1=0,oddzialy2=0;
        if(i%2==0)
            ktorzuca=3;
        else ktorzuca=2;
        int tab[9][9]={0};
        for(int j=0;j<64;j++)
        {
            int rzutbiala,rzutczarna;
            char kreska;
            plik>>rzutbiala>>kreska>>rzutczarna;
            //cout<<rzutbiala<<" "<<rzutczarna<<endl;
            if(ktorzuca==3)
            {
                if(tab[rzutbiala][rzutczarna]==0) tab[rzutbiala][rzutczarna]=3;
                else{
                if(tab[rzutbiala][rzutczarna]%2==1)tab[rzutbiala][rzutczarna]+=2;
                else
                {
                    bitwa++;
                    if(tab[rzutbiala][rzutczarna]==2)
                    {
                        int x=rzutbiala,y=rzutczarna;
                        plik>>rzutbiala>>kreska>>rzutczarna;
                        cout<<rzutbiala<<" "<<rzutczarna<<endl;
                        if(rzutbiala==rzutczarna)
                        {
                            while(rzutbiala==rzutczarna)
                            {
                                cout<<rzutbiala<<" "<<rzutczarna<<endl;
                                plik>>rzutbiala>>kreska>>rzutczarna;
                            }
                        }
                        if(rzutbiala>rzutczarna)
                        {
                            tab[x][y]=3;
                            wygranabitwa1++;
                        }
                        else{
                            tab[x][y]=2;
                            wygranabitwa2++;
                        }
                    }
                    else if(tab[rzutbiala][rzutczarna]!=2 && tab[rzutbiala][rzutczarna]%2==0)
                    {
                        wygranabitwa2++;
                    }
                }
                }
            }
            if(ktorzuca==2)
            {
                if(tab[rzutbiala][rzutczarna]==0) tab[rzutbiala][rzutczarna]=2;
                else{
                if(tab[rzutbiala][rzutczarna]%2==0)tab[rzutbiala][rzutczarna]+=2;
                else
                {
                    bitwa++;
                    if(tab[rzutbiala][rzutczarna]==3)
                    {
                        int x=rzutbiala,y=rzutczarna;
                        plik>>rzutbiala>>kreska>>rzutczarna;
                        cout<<rzutbiala<<" "<<rzutczarna<<endl;
                        if(rzutbiala==rzutczarna)
                        {
                            while(rzutbiala==rzutczarna)
                            {
                                cout<<rzutbiala<<" "<<rzutczarna<<endl;
                                plik>>rzutbiala>>kreska>>rzutczarna;
                            }
                        }
                        if(rzutczarna>rzutbiala)
                        {
                            tab[x][y]=2;
                            wygranabitwa2++;
                        }
                        else{
                            tab[x][y]=3;
                            wygranabitwa1++;
                        }
                    }
                    else
                    {
                        wygranabitwa1++;
                    }
                }
                }
            }
            if(ktorzuca==3)
                ktorzuca=2;
            else ktorzuca=3;
        }
        for(int k=0;k<9;k++)
        {
            for(int l=0;l<9;l++)
            {
                if(tab[k][l]%2==1)
                {
                    liczbazaj1++;
                    oddzialy1+=tab[k][l]/2;
                }
                if(tab[k][l]>0 && tab[k][l]%2==0)
                {
                    liczbazaj2++;
                    oddzialy2+=tab[k][l]/2;
                }
            }
        }
        //cout<<liczbazaj1<<" "<<liczbazaj2<<endl;
        //cout<<bitwa<<" "<<wygranabitwa1<<" "<<wygranabitwa2<<endl;
        cout<<"zad3 "<<endl;
        cout<<liczbazaj1<<" "<<liczbazaj2<<endl;
        cout<<oddzialy1<<" "<<oddzialy2<<endl;
        if(liczbazaj1>liczbazaj2)
            ile1++;
        if(liczbazaj1<liczbazaj2)
            ile2++;
        else if(liczbazaj1==liczbazaj2){
            if(oddzialy1>oddzialy2)
            ile1++;
            if(oddzialy1<oddzialy2)
            ile2++;
        }

    }
    cout<<endl;
    cout<<"zad 2"<<endl;
    cout<<bitwa<<" "<<wygranabitwa1<<" "<<wygranabitwa2<<endl;
    cout<<"zad1 "<<endl;
    //cout<<ile1<< " "<<ile2<<endl;
    if(ile1>ile2)
        cout<<"1"<<endl;
    else cout<<"2"<<endl;
    return 0;
}
