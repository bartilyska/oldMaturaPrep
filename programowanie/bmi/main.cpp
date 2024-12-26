#include <iostream>

using namespace std;
float wzrost,waga,bmi,testy;
int main()
{
    cout<<"Podaj ile testow"<<endl;
    cin>>testy;
    for(int i=0;i<testy;i++)
    {
    cout << "Podaj wzrost[m] " << endl;
    cin>>wzrost;
    cout<<"Podaj wage[kg] "<<endl;
    cin>>waga;
    bmi=waga/(wzrost*wzrost);
    cout<<bmi<<endl;
    if (bmi<18.5)
    {
        cout<<"za chudy"<<endl;
    }
    if(bmi>=25 && bmi<=18.5)
    {
        cout<<"okej"<<endl;
    }
    if(bmi>25)
    {
        cout<<"za gruby"<<endl;
    }
    }
    return 0;
}
