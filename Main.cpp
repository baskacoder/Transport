//Создать классы: "Транспортное средство" (вес, максимальная скорость,
//стоимость перемещения),
//"Легковой Автомобиль" (максимально возможный перевозимый багаж в кг, Класс/сегмент, тип кузова:
//седан, универсал, кабриолет, количество пассажиров, тип обивки сидений),
//"Автобус" (количество пассажиров, наличие кондиционера, откидывающихся сидений,
//максимальный возможный багаж для каждого пассажира),
//"Поезд", "Метро". Реализовать метод вычисления комфорта перевозки пассажиров в данном
//транспортном средстве (для поезда, легкового автомобиля, автобуса, метро).
//Реализовать добавления новых транспортных средств.
#include <iostream>
#include "AllCars.h"
using namespace std;

void choice()
{
	cout << "Подбор транспорта - 1" << endl;
	cout << "Добавление новых транспортных средств - 2" << endl;
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
			cout << "Легковой Автомобиль - 1" << endl;
			cout << "Автобус - 2" << endl;
			cout << "Поезд - 3" << endl;
			cout << "Метро - 4" << endl;
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
				cout << "Хотите продолжить? (y/n)" << endl;
				cin >> c;
			} while (c != 'n');
			new_car.Show_All();
		}
		break;
		default:
			cout << "Вы ввели неверное значение, повторите попытку!" << endl;
			goto start;
			break;
		}
		cout << "Хотите продолжить? (y/n)" << endl;
		cin >> a;
		if(a!='n')
		system("cls");
	} while (a != 'n');
	
	system("pause");
}