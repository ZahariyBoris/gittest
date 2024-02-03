#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "UKRAINIAN");
	float orm, weight, reps;
	cout<<"¬вед≥ть вагу: "<<endl;
	cin>>weight;
	cout<<"¬вед≥ть к≥льк≥сть повтор≥в: "<<endl;
	cin>>reps;
	orm = weight * (1 + reps / 30);
	cout<<"¬аш максимум на 1 повторенн€: "<<orm<<" кг"<< endl;
	return 0;
}
