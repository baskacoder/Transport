#include "SabWay.h"
#include <iostream>
using namespace std;


SabWay::SabWay():Transport()
{
}
void SabWay::Show_All()
{
	cout << "Вес: " << weight << endl;
	cout << "Максимальная скорость: " << maximum_speed << " км/ч" << endl;
	cout << "Цена: " << price << endl;
}
void SabWay::choice_of_comfort()
{
	price = 10;
	weight = 10000;
	maximum_speed = 90;
}
SabWay::~SabWay()
{
}
