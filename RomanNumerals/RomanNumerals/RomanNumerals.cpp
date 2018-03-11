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
    if (roman == 'I')
        return 1;
    else if (roman == 'V')
        return 5;
    else if (roman == 'X')
        return 10;
    else if (roman == 'L')
        return 50;
    else if (roman == 'C')
        return 100;
    else if (roman == 'D')
        return 500;
    else if (roman == 'M')
        return 1000;
    else
        return 0;
}


int _tmain(int argc, _TCHAR* argv[])
{
    // Test Code 1
    char input = 'I';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'V';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'X';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'L';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'C';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'D';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;
    input = 'M';
    cout << "Decimal numeral of " << input << " is " << romanNumeralCharToDecimal(input) << endl;

    // Test Code 2 - Given VI; Returns: 6
    string string_input = "VI";
    cout << "Decimal numeral of " << input << " is " << romanNumeralToDecimal(string_input) << endl;

    cin.get();

    return 0;
}

