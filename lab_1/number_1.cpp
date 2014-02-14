#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

int main(){
	double capital;
	double mounth;
	double capitalUp;
	double shopCost;
	double answer;

	cout << "Введите стартовый капитал: \n";
	cin >> capital;
	cout << "Введите ежемесечное увелечение капитала: \n";
	cin >> capitalUp;
	cout << "Введите стоимость магазина: \n";
	cin >> shopCost;

	mounth = ceil(log(shopCost / capital) / log((100 + capitalUp) / 100));
	answer = ceil(mounth / 12);
	cout << "Комераснт сможет купить магазин через " << answer << " лет\n";
	return 0;
}