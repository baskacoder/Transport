#include "Car.h"
#include <iostream>
using namespace std;

Car::Car()
{
	maximum_luggage = 0;
	number_of_passengers = 0;
	car_segment = A;
	kuzov = SEDAN;
    car_obivka = cloth;
}
Car::Car(int m_l, int n_o_p, segment c_s, body_type k, obivka c_o) :
	maximum_luggage(m_l),
	number_of_passengers(n_o_p),
	car_segment(c_s),
	kuzov(k),
	car_obivka(c_o)
{
	cout << "Поездка на легковом автомобиле";
}
void Car::choice_of_comfort()
{
	weight = 1260;
	cout << "Введите максимальную скорость автомобиля: ";
	cin >> maximum_speed;
	cout << "Выберите класс/сегмент: " << endl;
	cout << "A - класс - 1" << endl;
	cout << "B - класс - 2" << endl;
	cout << "C - класс - 3" << endl;
	cout << "D - класс - 4" << endl;
	cout << "E - класс - 5" << endl;
	cout << "F - класс - 6" << endl;
	cout << "S - класс - 7" << endl;
	cout << "M - класс - 8" << endl;
	cout << "J - класс - 9" << endl;
	cout << "Pick-up - 10" << endl;
	int t;
    start:
	cin >> t;
	car_segment = static_cast<segment>(t);
	switch (car_segment)
	{
	case A:
		price = 90;
		break;
	case B:
		price = 90;
		break;
	case C:
		price = 90;
		break;
	case D:
		price = 100;
		break;
	case E:
		price = 110;
		break;
	case F:
		price = 120;
		break;
	case M:
		price = 130;
		break;
	case J:
		price = 90;
		break;
	case S:
		price = 140;
		break;
	case Pickup:
		price = 150;
		break;
	default:
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start;
		break;
	}
	cout << "Выберите тип кузова: " << endl;
	cout << "Седан - 1" << endl;
	cout << "Универсал - 2" << endl;
	cout << "Кабриолет- 3" << endl;
	start1:
	cin >> t;
	kuzov = static_cast<body_type>(t);
	switch (kuzov)
	{
	case SEDAN:
		price += 250;
		break;
	case UNIVERSAL:
		price += 200;
		break;
	case KABRIOLET:
		price += 400;
		break;
	default:
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start1;
		break;
	}
	cout << "Выберите тип обивки сидений: " << endl;
	start2:
	cin >> t;
	car_obivka = static_cast<obivka>(t);
	switch (car_obivka)
	{
	case skin:
		price += 2000;
		break;
	case cloth:
		price += 750;
		break;
	default:
		cout << "Вы ввели неверное значение, повторите попытку!" << endl;
		goto start2;
		break;
	}
	cout << "Введите максимальное количество багажа: " << endl;
	cin >> maximum_luggage;
	price += maximum_luggage * 100;
}
void Car::Show_All()
{
	cout << "Вес: " << weight << endl;
	cout << "Максимальная скорость: " << maximum_speed << " км/ч" << endl;
	cout << "Максимальное количество багажа: " << maximum_luggage << endl;
	cout << "Класс/сегмент" << car_segment << endl;
	cout << "Тип обивки сидений:" << car_obivka << endl;
	cout << "Тип кузова" << kuzov << endl;
	cout << "Максимальное количество багажа:" << maximum_luggage << endl;
	cout << "Цена:" << price << endl;
}
Car::~Car()
{
}
