#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	
    double *upperBase = new double;
    double *lowerBase = new double;
    double *side = new double;
    double *height = new double;

    cout << "Введіть верхню основу трапеції: ";
    cin >> *upperBase;

    cout << "Введіть нижню основу трапеції: ";
    cin >> *lowerBase;

    cout << "Введіть бічну сторону трапеції: ";
    cin >> *side;

    cout << "Введіть висоту трапеції: ";
    cin >> *height;

    double area = 0.5 * (*upperBase + *lowerBase) * (*height);
    double perimeter = *upperBase + *lowerBase + 2 * (*side);

    cout << "Площа ділянки лісу: " << area << endl;
    cout << "Периметр ділянки лісу: " << perimeter << endl;

    delete upperBase;
    delete lowerBase;
    delete side;
    delete height;

    return 0;
}
