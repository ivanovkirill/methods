#include <iostream>
#include <cstdlib>
#include <ctype.h>
#include <cmath>
#include <string.h>
using namespace std;

double validation(double check){
	cin >> check;
	while ((cin.fail()) || (check < 0) ){
		cout << "Введенные данные некоректны. повторите попытку" << endl;
		cin.clear();
		cin.sync();
		while( cin.get() != '\n' );
		cin >> check;
	}
	return check;
}

int validationInt(int checkInt){
	cin >> checkInt;
	while ((cin.fail()) || (checkInt < 0) ){
		cout << "Веденыые данный некоректны, повторите попытку" << endl;
		cin.clear();
		cin.sync();
		while( cin.get() != '\n');
		cin >> checkInt;
	}
	return checkInt;
}

int main(){
	double grain;  
	double silage; 
	double feed = 50;
	int cowInHerd;
	double remainigGrain;
	double remainigSilage;
	double remainigFeed;
	double min;
	double answerQuestionOne;
	string answerQuestionTwo;

	cout << "Введите кол-во кг зерна, которое состовляет суточный рацион" << endl;
	grain = validation(grain);
	cout << "Введите кол-во кг силоса, которое состовляет суточный рацион" << endl;
	silage = validation(silage);
	cout << "Введите кол-во голов в стаде" << endl;
	cowInHerd = validationInt(cowInHerd);
	cout << "Введите кол-во оставшегося зерна (в кг)" << endl;
	remainigGrain = validation(remainigGrain);
	cout << "Введите кол-во оставшегосся силоса (в кг)" << endl;
	remainigSilage = validation(remainigSilage);
	cout << "Введите кол-во оставшегося комбикорма(в мешках)" << endl;
	remainigFeed = validation(remainigFeed);

	if ((remainigGrain * 100 / grain) < (remainigSilage * 1000 / silage)){
		if((remainigFeed * 50 / feed) < (remainigGrain * 100 / grain)){
			min = feed;
			answerQuestionTwo = "комбикром";
		}
		else{
				min = grain;
				answerQuestionTwo = "зерно";
			}
			}else if ((remainigFeed * 50 / feed) < (remainigSilage * 1000 / silage)) {
				min = feed;
				answerQuestionTwo = "комбикром";
			}
			else{
				min = silage;
				answerQuestionTwo = "силос";
		}
	answerQuestionOne = ceil(min / cowInHerd);
	cout << "Кормить стадо можно еще " << answerQuestionOne << " дней" << endl;
	cout << "Раньше всего кончится " << answerQuestionTwo << endl;
}