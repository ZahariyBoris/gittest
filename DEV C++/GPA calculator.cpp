#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	float g1,g2,g3,g4,g5,g6,g7,g8,g9,result;
	cout<<"³��� ���! � ��� ������� �� ������� ���������� ��� ������� ��� �� �������"<<endl;
	cout<<"������ ������ � �����: ";
	cin>>g1;
	cout<<"������ ������ � ����: ";
	cin>>g2;
	cout<<"������ ������ � ����������: ";
	cin>>g3;
	cout<<"������ ������ � ��������� ����: ";
	cin>>g4;
	cout<<"������ ������ � ��������� ˳��������: ";
	cin>>g5;
	cout<<"������ ������ � ��: ";
	cin>>g6;
	cout<<"������ ������ � ��������� ����: ";
	cin>>g7;
	cout<<"������ ������ � Գ���������: ";
	cin>>g8;
	cout<<"������ ������ � �����: ";
	cin>>g9;
	result=ceil((g1+g2+g3+g4+g5+g6+g7+g8+g9) / 9);
	cout<<"��� ������� ��� �� �������: "<<result;
	return 0;
}
