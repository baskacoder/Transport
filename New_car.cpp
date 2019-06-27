#include "New_car.h"
#include <iostream>
#include <string>


New_car::New_car()
{
}
void New_car::Add_New_Car()
{
	string name;
	cout << "Введите название транспортного средства: " << endl;
	cin >> name;
	cout << "Введите вес: " << endl;
	cin >> weight;
	cout << "Введите максимальную скорость: " << endl;
	cin >> maximum_speed;
	cout << "Введите стоимость: " << endl;
	cin >> price;
	new_cars.insert(pair<string, New_car>(name, *this));/*
	cout << "Название транспортного средства: " << name << endl;
	cout << "Вес: " << this->weight << endl; 
	cout << "Максимальная скорость: " << this->maximum_speed << endl;
	cout << "Стоимость: " << this->price << endl;*/
}
void New_car::choice_of_comfort()
{

}
void New_car::Show_All()
{
	auto it = new_cars.begin();
	for (int i = 0; it != new_cars.end(); it++, i++) {
		cout << "Название транспортного средства: " << it->first << endl;
		cout  << it->second << endl;
	}
}
New_car::~New_car()
{
}
ostream& operator<<(ostream& cout, New_car& n_c)
{
	cout << "Вес: " << n_c.weight << endl;
	cout << "Максимальная скорость: " << n_c.maximum_speed << endl;
	cout << "Стоимость: " << n_c.price << endl;
	return cout;
}