#include "Bus.h"
#include <iostream>
#include <string>
using namespace std;


Bus::Bus()
{
	number_of_passengers = 0;
	conditioner = false;
	seat = false;
	maximum_passenger_baggage = 0;
}
Bus::Bus(int n_o_p, bool c, bool s, int m_p_b):
number_of_passengers(n_o_p), 
conditioner(c),
seat(s), 
maximum_passenger_baggage(m_p_b)
{
	cout << "Поездка на автобусе";
}
void Bus::choice_of_comfort()
{
	weight = 15260;
	cout << "Введите максимальную скорость: " << endl;
	cin >> maximum_speed;
	cout << "Введите количество пассажиров: " << endl;
	cin >> number_of_passengers;
	cout << "Кондиционер (y/n): " << endl;
	string c;
	start:
	cin >> c;
	if (c == "y")
	{
		price = 200;
		number_of_passengers = true;
	}
	else if (c == "n")
	{
		price = 50;
		number_of_passengers = false;
	}
	else
	{
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start;
	}
	cout << "Откидывающиеся сиденья (y/n)? " << endl;
	start1:
	cin >> c;
	if (c == "y")
	{
		price += 100;
		seat = true;
	}
	else if (c == "n")
	{
		price += 50;
		seat = false;
	}
	else
	{
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start1;
	}
	cout << "Максимальный возможный багаж для каждого пассажира: " << endl;
	cin >> maximum_passenger_baggage;

}
void Bus::Show_All()
{
	cout << "Вес: " << weight << endl;
	cout << "Максимальная скорость: " << maximum_speed << " км/ч" << endl;
	cout << "Количество пассажиров: " << number_of_passengers << endl;
	cout << "Кондиционер: " << conditioner << endl;
	cout << "Откидывающиеся сиденья: " << seat << endl;
    cout << "Максимальный возможный багаж для каждого пассажира: " << maximum_passenger_baggage << endl;
	cout << "Цена: " << price << endl;
}
Bus::~Bus()
{
}
