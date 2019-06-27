#include "Transport.h"
enum Place{ coupe = 1, reserved_seat};
class Train: public Transport
{
	Place place;
public:
	Train();
	void choice_of_comfort();
	void Show_All();
	~Train();
};

