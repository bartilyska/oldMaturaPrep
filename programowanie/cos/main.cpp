#include <iostream>

using namespace std;
int a,b;
int main()
{
   cin>>a>>b;
   if(a>100 || b>100)
   {
       cout<<"Ta osoba nie zyje"<<endl;

   }
    else
    {
        if (a>b)
        {
            cout<<"Pierwsza osoba starsza"<<endl;

        }
        if(a==b)
        {
            cout<<"Ten sam wiek"<<endl;

        }
        if(a<b)
        {
            cout<<"Druga osoba jest starsza"<<endl;
        }

    }

    return 0;
}
