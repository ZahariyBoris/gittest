#include <iostream>
using namespace std;
int main() 
{
    setlocale(LC_ALL, "UKRAINIAN");
	
	double *sideLength = new double[4];
	
	cout << "Введіть верхню основу трапеції: ";
	cin >> sideLength[0];
	
	cout << "Введіть нижню основу трапеції: ";
	cin >> sideLength[1];
	
	cout << "Введіть бічну сторону трапеції: ";
	cin >> sideLength[2];
	
	cout << "Введіть висоту трапеції: ";
	cin >> sideLength[3];
	
	double P = sideLength[0] + sideLength[1] + (sideLength[2] * 2);
	double S = ((sideLength[0] + sideLength[1]) * sideLength[3] / 2);
	
	cout << "Площа ділянки лісу: " << S << endl;
	cout << "Периметр ділянки лісу: " << P << endl;
	
	delete[] sideLength;

    return 0;
}
