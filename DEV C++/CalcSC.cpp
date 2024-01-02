#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	int a,b,symbol;
	float result;
	cout<<"¬вед≥ть число 1: ";
	cin>>a;
	cout<<"¬вед≥ть число 2: ";
	cin>>b;
	cout<<"¬ибер≥ть д≥ю(+ це 1, - це 2, * це 3, / це 4): ";
	cin>>symbol;
	switch(symbol)
	{
		case 1: result=a+b; break;
		case 2: result=a-b; break;
		case 3: result=a*b; break;
		case 4: result=a/b; break;
		default: cout<<"ѕќћ»Ћ ј"; return 0;
	}
	cout<<"–езультат: "<<result;
}
