#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	
    double roomWidth, roomLength, totalCost, tilesNeeded;
    double tileCost = 52.0;

    cout<<"������ ������ ������ (�): ";
    cin>>roomWidth;
    cout<<"������ ������� ������ (�): ";
    cin>>roomLength;

	tilesNeeded=(roomWidth * roomLength) * 2;
	totalCost=tilesNeeded * tileCost;

    cout<<"������� " <<tilesNeeded<< " ������ ��� ������."<<endl;
    cout<<"�������� �������: " <<totalCost<< " ���."<<endl;

    return 0;
}
