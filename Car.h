//"Легковой Автомобиль" (максимально возможный перевозимый багаж в кг, Класс/сегмент, тип кузова:
//седан, универсал, кабриолет, количество пассажиров, тип обивки сидений)
#include "Transport.h"
enum segment {A = 1, B, C, D, E, F, S, M, J, Pickup};
enum body_type {SEDAN = 1, UNIVERSAL, KABRIOLET};
enum obivka {cloth = 1, skin};
class Car: public Transport
{
	int maximum_luggage;
	int number_of_passengers;
	segment car_segment;
	body_type kuzov;
	obivka car_obivka;
public:
	Car();
	Car(int, int, segment, body_type, obivka);
	void choice_of_comfort();
	void Show_All();
	~Car();
};

