#include "Train.h"
#include <iostream>
using namespace std;


Train::Train(): Transport()
{
}

void Train::choice_of_comfort()
{
	weight = 8050;
	cout << "Максимальная скорость: " << endl;
	cin >> maximum_speed;
	cout << "Купе или плацкарт? (купе - 1, плацкарт - 2)" << endl;
	int p;
	start:
	cin >> p;
	place = static_cast<Place>(p);
	switch (place)
	{
	case coupe:
		price = 400;
		break;
	case reserved_seat:
		price = 200;
		break;
	default:
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start;
		break;
	}
}
void Train::Show_All()
{
	cout << "Вес: " << weight << endl;
	cout << "Максимальная скорость: " << maximum_speed << " км/ч" << endl;
	cout << "Купе или плацкарт: " << place << endl;
	cout << "Цена:" << price << endl;
}
Train::~Train()
{
}
