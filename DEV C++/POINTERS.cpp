#include <iostream>

int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	
	// ��������� �����
	int a = 7;
	
	// ��������� �������� ptr � ������ ������ ����� �
	int *ptr = &a;
	
	// ������� �������� � ����� � �� ��������� ��������� ptr
	*ptr = 3;
	
	// �������� ����� � � ����� ��������� ��������
	std::cout << "����� �: " << a;
	
	return 0;
}
