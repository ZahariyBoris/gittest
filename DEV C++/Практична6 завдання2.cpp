#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
	
	double roomWidth, roomLength, roomHeight, totalCost, numberOfTiles;
    double tileCost=24.0;
    double doorWidth=1.0, doorHeight=2.0;
    
    cout<<"������ ������ ������ (�����): ";
    cin>>roomWidth;
    cout<<"������ ������� ������ (�����): ";
    cin>>roomLength;
    cout<<"������ ������ ������ (�����): ";
    cin>>roomHeight;
    
	numberOfTiles=((roomWidth * roomLength * roomHeight) - (doorWidth * doorHeight)) * 5;
	totalCost=numberOfTiles * numberOfTiles;
    
    cout<<"�������� ������� ��������� ������: " <<numberOfTiles<< " ����"<<endl;
    cout<<"�������� ������� ��������� ������: " <<totalCost<< " �������"<<endl;
    
    return 0;
}
