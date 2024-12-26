#include <iostream>
#include <cmath>
using namespace std;
class Punkt
{
    float x,y;
    string nazwa;
public:
    void wyswietl()
    {
        cout<<nazwa<<"( "<<x<<","<<y<<" )"<<endl;
    }
    Punkt(string n="S",float a=0,float b=0)
    {
        nazwa=n;
        x=a;
        y=b;
    }
};
class Kolo: public Punkt // klasa kolo dziedziczy z punkt
{
    protected:
    float r;
    string nazwa;
public:
    void wyswietl()
    {
        cout<<"Kolo o nazwie: "<<nazwa<<endl;
        cout<<"Srodek kola: "<<endl;
        Punkt::wyswietl();
        cout<<"Promien: "<<r<<endl;
        cout<<"Pole kola :"<<M_PI*r*r<<endl;
    }
    Kolo(string nk="kolko",string np="S",float a=0,float b=0,float pr=1)
    :Punkt(np,a,b)
    {
        nazwa = nk;
        r=pr;
    }
};
class Kula: public Kolo
{
    string nazwa;
public:
    void wyswietl()
    {
        cout<<"Nazwa kuli: "<<nazwa<<endl;
        Kolo::wyswietl();
        cout<<"Objetosc: "<<4/3*M_PI*r*r*r<<endl;
    }
    Kula(string nazwakuli="kuleczka",string nk="kolko",string np="S",float a=0,float b=0,float pr=2)
    :Kolo(nk,np,a,b,pr)
    {
        nazwa=nazwakuli;
    }
};
int main()
{
    Kula k1("kulka");
    k1.wyswietl();
    return 0;
}
