#include <iostream>
#include <fstream>
using namespace std;

int main()
{   int sasiad[12][20];
    char pole [12][20];
    ifstream plik("gra.txt");
    for(int y=1;y<=12;y++)
    {
        for(int x=1;x<=20;x++)
        {
            plik>>pole[y][x];
        }
    }
    for(int y=1;y<=12;y++)
    {
        for(int x=1;x<=20;x++)
        {
            if(pole[y][x]=='x')
            {
                if(pole[y][x]==pole[y][x+1])sasiad[y][x]++;
                if(pole[y][x]==pole[y+1][x])sasiad[y][x]++;
                if(pole[y][x]==pole[y+1][x+1])sasiad[y][x]++;
                if(pole[y][x]==pole[y][x-1])sasiad[y][x]++;
                if(pole[y][x]==pole[y-1][x])sasiad[y][x]++;
                if(pole[y][x]==pole[y-1][x-1])sasiad[y][x]++;
                if(pole[y][x]==pole[y+1][x-1])sasiad[y][x]++;
                if(pole[y][x]==pole[y-1][x+1])sasiad[y][x]++;
                if(sasiad[y][x]==2 || sasiad[y][x]==3)
                cout<<"x";
                else cout<<".";
            }
                if(pole[y][x]=='.')
            {
                if(pole[y][x]!=pole[y][x+1])sasiad[y][x]++;
                if(pole[y][x]!=pole[y+1][x])sasiad[y][x]++;
                if(pole[y][x]!=pole[y+1][x+1])sasiad[y][x]++;
                if(pole[y][x]!=pole[y][x-1])sasiad[y][x]++;
                if(pole[y][x]!=pole[y-1][x])sasiad[y][x]++;
                if(pole[y][x]!=pole[y-1][x-1])sasiad[y][x]++;
                if(pole[y][x]!=pole[y+1][x-1])sasiad[y][x]++;
                if(pole[y][x]!=pole[y-1][x+1])sasiad[y][x]++;
                if(sasiad[y][x]==3)
                    cout<<"x";
                else cout<<".";
            }
            cout<<endl;
        }
    }


    return 0;
}
