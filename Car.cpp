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
	cout << "������� �� �������� ����������";
}
void Car::choice_of_comfort()
{
	weight = 1260;
	cout << "������� ������������ �������� ����������: ";
	cin >> maximum_speed;
	cout << "�������� �����/�������: " << endl;
	cout << "A - ����� - 1" << endl;
	cout << "B - ����� - 2" << endl;
	cout << "C - ����� - 3" << endl;
	cout << "D - ����� - 4" << endl;
	cout << "E - ����� - 5" << endl;
	cout << "F - ����� - 6" << endl;
	cout << "S - ����� - 7" << endl;
	cout << "M - ����� - 8" << endl;
	cout << "J - ����� - 9" << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start;
		break;
	}
	cout << "�������� ��� ������: " << endl;
	cout << "����� - 1" << endl;
	cout << "��������� - 2" << endl;
	cout << "���������- 3" << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start1;
		break;
	}
	cout << "�������� ��� ������ �������: " << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start2;
		break;
	}
	cout << "������� ������������ ���������� ������: " << endl;
	cin >> maximum_luggage;
	price += maximum_luggage * 100;
}
void Car::Show_All()
{
	cout << "���: " << weight << endl;
	cout << "������������ ��������: " << maximum_speed << " ��/�" << endl;
	cout << "������������ ���������� ������: " << maximum_luggage << endl;
	cout << "�����/�������" << car_segment << endl;
	cout << "��� ������ �������:" << car_obivka << endl;
	cout << "��� ������" << kuzov << endl;
	cout << "������������ ���������� ������:" << maximum_luggage << endl;
	cout << "����:" << price << endl;
}
Car::~Car()
{
}
