#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	
    double *upperBase = new double;
    double *lowerBase = new double;
    double *side = new double;
    double *height = new double;

    cout << "������ ������ ������ ��������: ";
    cin >> *upperBase;

    cout << "������ ����� ������ ��������: ";
    cin >> *lowerBase;

    cout << "������ ���� ������� ��������: ";
    cin >> *side;

    cout << "������ ������ ��������: ";
    cin >> *height;

    double area = 0.5 * (*upperBase + *lowerBase) * (*height);
    double perimeter = *upperBase + *lowerBase + 2 * (*side);

    cout << "����� ������ ���: " << area << endl;
    cout << "�������� ������ ���: " << perimeter << endl;

    delete upperBase;
    delete lowerBase;
    delete side;
    delete height;

    return 0;
}
