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

int simplify(int chyselnyk, int znamennyk) {
    int NSD = findNSD(chyselnyk, znamennyk);

    chyselnyk /= NSD;
    znamennyk /= NSD;
}

int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	
	int upperNumber, lowerNumber;
	
	cout << "������ ���������: ";
    cin >> upperNumber;
    cout << "������ ���������: ";
    cin >> lowerNumber;
    
    int result = simplify(upperNumber, lowerNumber);
    
    cout << "���������� ���: " << result << endl;
    
    return 0;
}
