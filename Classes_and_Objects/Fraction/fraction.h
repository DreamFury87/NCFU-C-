#pragma once
#include <iostream>
#include <string>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction();
    Fraction(int num);
    Fraction(int num, int den);
    ~Fraction();

    int get_numerator();
    int get_denominator();
    std::string percent();
    int denominator_sum();
};
