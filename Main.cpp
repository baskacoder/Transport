//������� ������: "������������ ��������" (���, ������������ ��������,
//��������� �����������),
//"�������� ����������" (����������� ��������� ����������� ����� � ��, �����/�������, ��� ������:
//�����, ���������, ���������, ���������� ����������, ��� ������ �������),
//"�������" (���������� ����������, ������� ������������, �������������� �������,
//������������ ��������� ����� ��� ������� ���������),
//"�����", "�����". ����������� ����� ���������� �������� ��������� ���������� � ������
//������������ �������� (��� ������, ��������� ����������, ��������, �����).
//����������� ���������� ����� ������������ �������.
#include <iostream>
#include "AllCars.h"
using namespace std;

void choice()
{
	cout << "������ ���������� - 1" << endl;
	cout << "���������� ����� ������������ ������� - 2" << endl;
}
void car_selection(int t)
{
	Transport* transport;
	switch (t)
	{
	case 1:
		transport = new Car();
		transport->choice_of_comfort();
		transport->Show_All();
		delete transport;
	break;
	case 2:
		transport = new Bus();
		transport->choice_of_comfort();
		transport->Show_All();
		delete transport;
	break;
	case 3:
		transport = new Train();
		transport->choice_of_comfort();
		transport->Show_All();
		delete transport;
	break;
	case 4:
		transport = new SabWay();
		transport->choice_of_comfort();
		transport->Show_All();
		delete transport;
	break;
	}
}
int main()
{
	setlocale(LC_ALL, "russian");
	int ch;
	char a;
	do
	{
	start:
		choice();
		cin >> ch;
		switch (ch)
		{
		case 1:
			int t;
			cout << "�������� ���������� - 1" << endl;
			cout << "������� - 2" << endl;
			cout << "����� - 3" << endl;
			cout << "����� - 4" << endl;
			cin >> t;
			car_selection(t);
			break;
		case 2:
		{
			New_car new_car;
			char c;
			do
			{
				new_car.Add_New_Car();
				cout << "������ ����������? (y/n)" << endl;
				cin >> c;
			} while (c != 'n');
			new_car.Show_All();
		}
		break;
		default:
			cout << "�� ����� �������� ��������, ��������� �������!" << endl;
			goto start;
			break;
		}
		cout << "������ ����������? (y/n)" << endl;
		cin >> a;
		if(a!='n')
		system("cls");
	} while (a != 'n');
	
	system("pause");
}