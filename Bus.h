//"�������" (���������� ����������, ������� ������������, �������������� �������,
//������������ ��������� ����� ��� ������� ���������)
#include "Transport.h"
class Bus: public Transport
{
	int number_of_passengers;
	bool conditioner;
	bool seat;
	int maximum_passenger_baggage;
public:
	Bus();
	Bus(int, bool, bool, int);
	void choice_of_comfort();
	void Show_All();
	~Bus();
};

