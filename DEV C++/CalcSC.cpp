#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	int a,b,symbol;
	float result;
	cout<<"������ ����� 1: ";
	cin>>a;
	cout<<"������ ����� 2: ";
	cin>>b;
	cout<<"������� ��(+ �� 1, - �� 2, * �� 3, / �� 4): ";
	cin>>symbol;
	switch(symbol)
	{
		case 1: result=a+b; break;
		case 2: result=a-b; break;
		case 3: result=a*b; break;
		case 4: result=a/b; break;
		default: cout<<"�������"; return 0;
	}
	cout<<"���������: "<<result;
}
