#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "UKRAINIAN");
	int x,y,d;
    cout<<"������ ������ �������� (X �� Y): ";
    cin>>x>>y;
    cout<<"������ ������ ������ (D): ";
    cin>>d;
    if (d <= x && d <= y)
		cout<<"������ ��� ���� � �������!" <<endl;
    else 
        cout<< "������ ��� ��������� � �������!"<<endl;
    return 0;
}
