#pragma once
#include <math.h>
#include <string>

class Right_Triangle {
private:
	double leg1;
	double leg2;
public:
	Right_Triangle(double l1, double l2) : leg1(l1), leg2(l2) {}
	std::string print();
	double count_hypotenuse();
};
