#include <iostream>
using namespace std;

int functionNumber1() {
	int a = 1, b = 2;
	int result = a + b;
	return result;
}

int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	cout << functionNumber1() << endl;
	return 0;
}
