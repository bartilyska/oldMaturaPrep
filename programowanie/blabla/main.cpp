#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;
HANDLE hOut;
int main()
{
    string napis="pingpongpongobingopoasndoifsnskcankslcnvfjkvnfjdcnlkascnjdkf";
    string wzorzec="doif";
    bool prawda=0;
    int n=0;
    hOut = GetStdHandle( STD_OUTPUT_HANDLE );
    while(n<=napis.length()-wzorzec.length())
    {
        int j=0;
        while(j<wzorzec.length() && wzorzec[j]==napis[j+n])
            j++;
        if(j==wzorzec.length())
            {
            SetConsoleTextAttribute( hOut, FOREGROUND_RED | FOREGROUND_INTENSITY );
            for(int i=n;i<n+j;i++)
            {
                cout<<napis[i]<<flush;
            }
            prawda=1;
            }

        else
        {
            SetConsoleTextAttribute( hOut, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED );
            cout<<napis[n];
        }
        n++;
    }
    if(!prawda) cout<<"Nie znaleziono wzorca"<<endl;
    return 0;
}
