#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	float width,length,s,priceformsquare;
	int material;
	start: cout<<"�����"<<endl;
	cout<<"������ (��) ";
	cin>>width;
	cout<<"������ (��) ";
	cin>>length;
	cout<<"������� (1 - �������, 2 - ��������, 3 - ������) "<<endl;
	cin>>material;
	switch(material)
	{
		case 1: priceformsquare=150; break;
		case 2: priceformsquare=165; break;
		case 3: priceformsquare=175; break;
		default: goto start;
	}
	cout<<"������� 1 �2 - "<<priceformsquare<<endl;
	s=(width*length)/10000;
	cout<<"����� "<<s<<endl;
	cout<<"�� ������ "<<s*priceformsquare<<" ���"<<endl;
	return 0;
}
