#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	float orm, weight, reps;
	cout<<"������ ����: "<<endl;
	cin>>weight;
	cout<<"������ ������� �������: "<<endl;
	cin>>reps;
	orm = weight * (1 + reps / 30);
	cout<<"��� �������� �� 1 ����������: "<<orm<<" ��"<< endl;
	return 0;
}
