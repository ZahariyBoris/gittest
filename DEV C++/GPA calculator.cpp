#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "UKRAINIAN");
	float g1,g2,g3,g4,g5,g6,g7,g8,g9,result;
	cout<<"Вітаю вас! В цій програмі ви зможете вирахувати ваш середній бал за семестр"<<endl;
	cout<<"Введіть оцінку з ОПІ: ";
	cin>>g1;
	cout<<"Введіть оцінку з ОПАМ: ";
	cin>>g2;
	cout<<"Введіть оцінку з Математики: ";
	cin>>g3;
	cout<<"Введіть оцінку з Української Мови: ";
	cin>>g4;
	cout<<"Введіть оцінку з Української Літератури: ";
	cin>>g5;
	cout<<"Введіть оцінку із Захисту Вітчизни: ";
	cin>>g6;
	cout<<"Введіть оцінку з Англійської Мови: ";
	cin>>g7;
	cout<<"Введіть оцінку з Фізкультури: ";
	cin>>g8;
	cout<<"Введіть оцінку з Історії: ";
	cin>>g9;
	result=ceil((g1+g2+g3+g4+g5+g6+g7+g8+g9) / 9);
	cout<<"Ваш середній бал за семестр: "<<result;
	return 0;
}
