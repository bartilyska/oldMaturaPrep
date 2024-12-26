#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>
using namespace std;
float funkcja (float x)
{
    return 197.11005+2*(-40.76555)*x+3*2.71770*x*x;
}
float fun (float a,float b,float c,float d,float x)
{
    return a+b*x+c*x*x+d*x*x*x;
}
double miejsce (float p,float l,float a,float b,float c, float d)
{
   double prawa=p;
   double lewa=l;
   double x;
    while(fabs(lewa-prawa)>0.00001)
    {
    x=(lewa+prawa)/2;
    if (fun(a,b,c,d,x)>0)
    prawa=x;
    else
    lewa=x;
    }
    return x;
}
int main()
{
    float a0[5],a1[5],a2[5],a3[5];
    ifstream plik("funkcja.txt");
    for(int i=0;i<5;i++)
    {
        plik>>a0[i]>>a1[i]>>a2[i]>>a3[i];
    }
    cout<<setprecision(6)<<a0[1]+a1[1]*1.5+a2[1]*1.5*1.5+a3[1]*1.5*1.5*1.5<<endl;
    float prawa=4.0;
    float lewa=5.0;
    float srodek;
    while(fabs(lewa-prawa)>0.000001)
    {
        srodek=(lewa+prawa)/2;
        if(funkcja(srodek)>0)
        prawa=srodek;
        else
        lewa=srodek;
    }
    cout<<setprecision(4)<<srodek<<endl;
    cout<<fixed<<setprecision(5)<<a0[4]+a1[4]*srodek+a2[4]*srodek*srodek+a3[4]*srodek*srodek*srodek<<endl;
    cout<<miejsce(0,1,a0[0],a1[0],a2[0],a3[0])<<endl;
    cout<<miejsce(2,3,a0[2],a1[2],a2[2],a3[2])<<endl;
    cout<<miejsce(3,4,a0[3],a1[3],a2[3],a3[3])<<endl;
    cout<<miejsce(4,5,a0[4],a1[4],a2[4],a3[4])<<endl;
    return 0;
}
