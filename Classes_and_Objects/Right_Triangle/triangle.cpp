#include "triangle.h"
#include <iostream>

std::string Right_Triangle::print() {
	std::string result = "Катет 1: " + std::to_string(leg1) + 
		", Катет 2: " + std::to_string(leg2) +
		", Гипотенуза: " + std::to_string(count_hypotenuse());
	return result;
}
double Right_Triangle::count_hypotenuse() {
	double result = sqrt(leg1 * leg1 + leg2 * leg2);
	return result;
}
