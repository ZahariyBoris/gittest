#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "UKRAINIAN");
	
	double *sideLength = new double[4];
	
	cout << "������ ������ ������ ��������: ";
	cin >> sideLength[0];
	
	cout << "������ ����� ������ ��������: ";
	cin >> sideLength[1];
	
	cout << "������ ���� ������� ��������: ";
	cin >> sideLength[2];
	
	cout << "������ ������ ��������: ";
	cin >> sideLength[3];
	
	double P = sideLength[0] + sideLength[1] + (sideLength[2] * 2);
	double S = ((sideLength[0] + sideLength[1]) * sideLength[3] / 2);
	
	cout << "����� ������ ���: " << S << endl;
	cout << "�������� ������ ���: " << P << endl;
	
	delete[] sideLength;

    return 0;
}
