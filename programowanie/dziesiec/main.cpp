#include <iostream>

using namespace std;

float metry;

float ile_cali(float m)
{
    float cale=m*39.37;

    return cale;
}
float ile_jardow(float x);

void ile_mil(float m)
{
    cout<<"na mile: "<<m*0.0006213;
}

int main()
{
    cout << "Podaj ile metrow: " ;
    cin>>metry;

    cout<<"na cale: "<<ile_cali(metry)<<endl;
    cout<<"na jardy: "<<ile_jardow(metry)<<endl;
    ile_mil(metry);
    return 0;
}
float ile_jardow(float x)
{
    return x*1.0936;
}
