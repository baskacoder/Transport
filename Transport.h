#pragma once
//"Транспортное средство" (вес, максимальная скорость, стоимость перемещения)
class Transport
{
protected:
	int weight;
	int maximum_speed;
	float price;
public:
	Transport();
	virtual void choice_of_comfort() = 0;
	virtual void Show_All() = 0;
	~Transport();
};

