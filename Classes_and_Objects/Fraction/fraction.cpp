//#pragma once
#include <iostream>
#include "fraction.h"

Fraction::Fraction() {
    Fraction::numerator = 1;
    Fraction::denominator = 2;
}
Fraction::Fraction(int num) {
    Fraction::numerator = num;
    Fraction::denominator = 2;
}
Fraction::Fraction(int num, int den) {
    std::cout << "created\n";
    Fraction::numerator = num;
    Fraction::denominator = den;
}
Fraction::~Fraction() {
    std::cout << "deleted" << std::endl;
}

std::string Fraction::percent() {
    return std::to_string((Fraction::numerator * 1.0 / Fraction::denominator) * 100) + " %";
}

int Fraction::denominator_sum() {
    int den = Fraction::denominator, sum = 0;
    while (den) {
        sum += den % 10;
        den /= 10;
    }
    return sum;
}
int Fraction::get_numerator() {
    return Fraction::numerator;
}
int Fraction::get_denominator() {
    return Fraction::denominator;
}

