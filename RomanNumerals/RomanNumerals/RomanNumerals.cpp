// RomanNumerals.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;

/*
Converts a roman numeral character to decimal, used for romanNumeralToDecimal function.
*/
int romanNumeralCharToDecimal(char roman)
{
    return 0;
}


int _tmain(int argc, _TCHAR* argv[])
{
    // Test Code 1
    char input = 'I';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'V';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = 'X';
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = 'L';
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = 'C';
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = 'D';
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;
    input = 'M';
    std::cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << std::endl;

    cin.get();

    return 0;
}

