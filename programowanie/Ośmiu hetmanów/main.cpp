#include <bits/stdc++.h>

using namespace std;
    short int dia_r[256]={0};
    short int dia_l[256]={0};
    short int col[8]={0};
    short int chart[8][8];
    int znaleziony=0;
void drukuj ()
{
    int x,y;
    cout<<"kombinacja: "<<znaleziony<<endl<<" ABCDEFGH\n";
    for(y=7;y>=0;y--)
    {
        cout<<y+1;
        for(x=0;x<8;x++)
        {
            if(chart[x][y])
                cout<<"H";
            else cout<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}
void dodaj_hetmana(int row){
    int i;
    for(i=0;i<8;i++)
    {
        if(!((col[i]==1) || (dia_r[i-row+128]==1) || (dia_l[row+i+128]==1)))
        {
            dia_r[i-row+128]=1;
            dia_l[row+i+128]=1;
            col[i]=1;
            chart[i][row]=1;
            if(row<7)
                dodaj_hetmana(row+1);
            else{
                znaleziony++;
                drukuj();
            }
        dia_r[i-row+128]=0;
        dia_l[row+i+128]=0;
        col[i]=0;
        chart[i][row]=0;
        }
    }
}
int main()
{
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
            chart[i][j]=0;
    dodaj_hetmana(0);
    return 0;
}
