#include <iostream>

using namespace std;
string anagram(string s){
	int dl=s.length();
	int a=0,b=0,c=0;
	string odp="";
	for(int i=0;i<dl;i++)
	{
		if(s[i]=='a') a++;
        if(s[i]=='b') b++;
		if(s[i]=='c') c++;
	}
	for(int i=1;i<a;i++)
	odp=odp+"a";
	for(int i=1;i<b;i++)
	odp=odp+"b";
	for(int i=1;i<c;i++)
	odp=odp+"c";
	return odp;
}
int main()
{
    cout << anagram("abaca");
    return 0;
}
