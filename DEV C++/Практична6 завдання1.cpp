#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	
    double roomWidth, roomLength, totalCost, tilesNeeded;
    double tileCost = 52.0;

    cout<<"Введіть ширину кімнати (м): ";
    cin>>roomWidth;
    cout<<"Введіть довжину кімнати (м): ";
    cin>>roomLength;

	tilesNeeded=(roomWidth * roomLength) * 2;
	totalCost=tilesNeeded * tileCost;

    cout<<"Потрібно " <<tilesNeeded<< " плиток для підлоги."<<endl;
    cout<<"Загальна вартість: " <<totalCost<< " грн."<<endl;

    return 0;
}
