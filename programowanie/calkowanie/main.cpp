#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return -x*x*x*x+10;
}
float prostokat(float pocz,float kon,float liczba)
{
    float dl=fabs(kon-pocz)/liczba;
    float h=0;
    for(int i=0;i<liczba;i++)
    {
        h+=fabs(f(pocz+(dl*i)+(dl/2)));
    }
    float odp=h*dl;
    return odp;
}
float trapez(float pocz,float kon,float liczba)
{
    float dl=fabs(kon-pocz)/liczba;
    float podstawa=0;
    for(int i=1;i<liczba;i++)
    {
        podstawa+=fabs(f(pocz+i*dl));
    }
    float odp=dl/2*(fabs(f(pocz))+fabs(f(kon))+2*podstawa);
    return odp;
}
int main()
{
    int a,b,n;
    cin>>a>>b>>n;
    cout<<prostokat(a,b,n)<<endl;
    cout<<trapez(a,b,n)<<endl;
    return 0;
}
