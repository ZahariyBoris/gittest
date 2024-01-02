#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	int k,m;
	float cost;
	start: cout<<"¬вед≥ть номер населеного пункту: ";
	cin>>k;
	cout<<"¬вед≥ть к≥льк≥сть б≥лет≥в: ";
	cin>>m;
	switch(k)
	{
		case 1: cost=20; break;
		case 2: cost=22; break;
		case 3: cost=24; break;
		case 4: cost=25; break;
		case 5: cost=28; break;
		case 6: cost=30; break;
		case 7: cost=33; break;
		case 8: cost=36; break;
		default: goto start;
	}
	cout<<m<<" б≥лет≥в в населений пункт "<<k<<" буде коштувати "<<m*cost<<" грн."<<endl;
	return 0;
}
