#include <iostream>

using namespace std;
class Event
{
    int day,month,year;
    int hour, minutes;
    string name;

public:
    Event(string="brak",int=1,int=1,int=2015,int=1,int=10);
    ~Event();
    void load();
    void show();
};
