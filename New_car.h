#include "Transport.h"
#include <map> 
#include <string>
using namespace std;

class New_car: public Transport
{
	map<string, New_car> new_cars;
public:
	friend ostream& operator<<(ostream& cout, New_car& circleArr);
	New_car();
	void Add_New_Car();
	void Show_All();
	void choice_of_comfort();
	~New_car();
};

