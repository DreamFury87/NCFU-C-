#pragma once
#include <iostream>
#include <string>

class Fraction {
private:
    int numerator;
    int denominator;
public:
    Fraction() {
        numerator = 1;
        denominator = 2;
    }
    Fraction(int num) {
        numerator = num;
        denominator = 2;
    }
    Fraction(int num, int den) {
        std::cout << "created\n";
        numerator = num;
        denominator = den;
    }
    ~Fraction() {
        std::cout << "deleted" << std::endl;
    }
    int get_numerator();
    int get_denominator();
    std::string percent();
    int denominator_sum();
};

