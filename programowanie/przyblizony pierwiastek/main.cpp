#include <iostream>
#include <cmath>
using namespace std;
double pierwiastek(float pole,float przyblizenie)
{
    double a=pole/2.0; // jeden bok to a, a drugi P/a
    while(fabs(pole/a-a)>przyblizenie) // poki bok-bok wieksze od przyblizenia
    {
        a=(a+pole/a)/2; //srednia arytmetyczna jednego i drugiego boku
        if(a*a==pole)
            break;
    }
    return a;
}
int main()
{
    float n,p;
    cin>>n>>p;
    cout<<pierwiastek(n,p)<<endl;
    return 0;
}
