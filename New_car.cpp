#include "New_car.h"
#include <iostream>
#include <string>


New_car::New_car()
{
}
void New_car::Add_New_Car()
{
	string name;
	cout << "������� �������� ������������� ��������: " << endl;
	cin >> name;
	cout << "������� ���: " << endl;
	cin >> weight;
	cout << "������� ������������ ��������: " << endl;
	cin >> maximum_speed;
	cout << "������� ���������: " << endl;
	cin >> price;
	new_cars.insert(pair<string, New_car>(name, *this));/*
	cout << "�������� ������������� ��������: " << name << endl;
	cout << "���: " << this->weight << endl; 
	cout << "������������ ��������: " << this->maximum_speed << endl;
	cout << "���������: " << this->price << endl;*/
}
void New_car::choice_of_comfort()
{

}
void New_car::Show_All()
{
	auto it = new_cars.begin();
	for (int i = 0; it != new_cars.end(); it++, i++) {
		cout << "�������� ������������� ��������: " << it->first << endl;
		cout  << it->second << endl;
	}
}
New_car::~New_car()
{
}
ostream& operator<<(ostream& cout, New_car& n_c)
{
	cout << "���: " << n_c.weight << endl;
	cout << "������������ ��������: " << n_c.maximum_speed << endl;
	cout << "���������: " << n_c.price << endl;
	return cout;
}