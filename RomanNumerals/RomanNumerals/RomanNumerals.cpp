// RomanNumerals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;



int _tmain(int argc, _TCHAR* argv[])
{
    // Test Code 1
    string input = "I";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "V";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "X";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "L";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "C";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "D";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = "M";
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;

    cin.get();

    return 0;
}

