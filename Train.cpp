#include "Train.h"
#include <iostream>
using namespace std;


Train::Train(): Transport()
{
}

void Train::choice_of_comfort()
{
	weight = 8050;
	cout << "������������ ��������: " << endl;
	cin >> maximum_speed;
	cout << "���� ��� ��������? (���� - 1, �������� - 2)" << endl;
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
		cout << "�� ����� �������� ��������, ��������� �������!" << endl;
		goto start;
		break;
	}
}
void Train::Show_All()
{
	cout << "���: " << weight << endl;
	cout << "������������ ��������: " << maximum_speed << " ��/�" << endl;
	cout << "���� ��� ��������: " << place << endl;
	cout << "����:" << price << endl;
}
Train::~Train()
{
}
