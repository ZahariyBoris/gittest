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
	
    cout << "Ââåä³òü ÷èñåëüíèê: ";
    cin >> upperNumber;
    cout << "Ââåä³òü çíàìåííèê: ";
    cin >> lowerNumber;
    
    int NSD = findNSD(upperNumber, lowerNumber);

    upperNumber /= NSD;
    lowerNumber /= NSD;
    
    cout << "Ñêîðî÷åíèé äð³á: " << upperNumber << " / " << lowerNumber << endl;
    
    return 0;
}
