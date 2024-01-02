#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	float width,length,s,priceformsquare;
	int material;
	start: cout<<"Жалюзі"<<endl;
	cout<<"Ширина (см) ";
	cin>>width;
	cout<<"Висота (см) ";
	cin>>length;
	cout<<"Матеріал (1 - Пластик, 2 - Текстиль, 3 - Алюміній) "<<endl;
	cin>>material;
	switch(material)
	{
		case 1: priceformsquare=150; break;
		case 2: priceformsquare=165; break;
		case 3: priceformsquare=175; break;
		default: goto start;
	}
	cout<<"Вартість 1 м2 - "<<priceformsquare<<endl;
	s=(width*length)/10000;
	cout<<"Площа "<<s<<endl;
	cout<<"До сплати "<<s*priceformsquare<<" грн"<<endl;
	return 0;
}
