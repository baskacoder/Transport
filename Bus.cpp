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
	cout << "������� �� ��������";
}
void Bus::choice_of_comfort()
{
	weight = 15260;
	cout << "������� ������������ ��������: " << endl;
	cin >> maximum_speed;
	cout << "������� ���������� ����������: " << endl;
	cin >> number_of_passengers;
	cout << "����������� (y/n): " << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start;
	}
	cout << "�������������� ������� (y/n)? " << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start1;
	}
	cout << "������������ ��������� ����� ��� ������� ���������: " << endl;
	cin >> maximum_passenger_baggage;

}
void Bus::Show_All()
{
	cout << "���: " << weight << endl;
	cout << "������������ ��������: " << maximum_speed << " ��/�" << endl;
	cout << "���������� ����������: " << number_of_passengers << endl;
	cout << "�����������: " << conditioner << endl;
	cout << "�������������� �������: " << seat << endl;
    cout << "������������ ��������� ����� ��� ������� ���������: " << maximum_passenger_baggage << endl;
	cout << "����: " << price << endl;
}
Bus::~Bus()
{
}
