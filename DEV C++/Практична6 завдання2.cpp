#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
	
	double roomWidth, roomLength, roomHeight, totalCost, numberOfTiles;
    double tileCost=24.0;
    double doorWidth=1.0, doorHeight=2.0;
    
    cout<<"Введіть ширину кімнати (метри): ";
    cin>>roomWidth;
    cout<<"Введіть довжину кімнати (метри): ";
    cin>>roomLength;
    cout<<"Введіть висоту кімнати (метри): ";
    cin>>roomHeight;
    
	numberOfTiles=((roomWidth * roomLength * roomHeight) - (doorWidth * doorHeight)) * 5;
	totalCost=numberOfTiles * numberOfTiles;
    
    cout<<"Загальна кількість керамічних плиток: " <<numberOfTiles<< " штук"<<endl;
    cout<<"Загальна вартість керамічних плиток: " <<totalCost<< " гривень"<<endl;
    
    return 0;
}
