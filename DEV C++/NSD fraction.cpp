#include <iostream>
#include <cmath>
using namespace std;

int findNSD(int a, int b) {
    while (b != 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main() {
    setlocale(LC_ALL, "UKRAINIAN");
	
    int upperNumber, lowerNumber;
	
    cout << "������ ���������: ";
    cin >> upperNumber;
    cout << "������ ���������: ";
    cin >> lowerNumber;
    
    int NSD = findNSD(upperNumber, lowerNumber);

    upperNumber /= NSD;
    lowerNumber /= NSD;
    
    cout << "���������� ���: " << upperNumber << " / " << lowerNumber << endl;
    
    return 0;
}
