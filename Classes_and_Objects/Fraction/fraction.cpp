//#pragma once
#include <iostream>
#include "fraction.h"

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



