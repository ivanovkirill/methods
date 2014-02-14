#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctype.h>
using namespace std;

double validation(double check){
	cin >> check;
	while (cin.fail()){
		cout << "Введенные данные некоректны. повторите попытку" << endl;
		cin.clear();
		cin.sync();
		while( cin.get() != '\n' );
		cin >> check;
	}
	return check;
}

int main(){
	double capital;
	double mounth;
	double capitalUp;
	double shopCost;
	double answer;

	cout << "Введите стартовый капитал: \n";
	validation(capital);
	cout << capital;
	cout << "Введите ежемесечное увелечение капитала: \n";
	validation(capitalUp);
	cout << capitalUp;
	cout << "Введите стоимость магазина: \n";
	validation(shopCost);
	cout << shopCost;

	mounth = ceil(log(shopCost / capital) / log((100 + capitalUp) / 100));
	answer = ceil(mounth / 12);
	cout << "Комераснт сможет купить магазин через " << answer << " лет\n";
	return 0;
}