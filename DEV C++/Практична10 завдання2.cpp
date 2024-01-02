#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
	int x,y,d;
    cout<<"Введіть розміри квадрату (X та Y): ";
    cin>>x>>y;
    cout<<"Введіть діаметр голови (D): ";
    cin>>d;
    if (d <= x && d <= y)
		cout<<"Голова Феді влізе в квадрат!" <<endl;
    else 
        cout<< "Голова Феді застрягне в квадраті!"<<endl;
    return 0;
}
