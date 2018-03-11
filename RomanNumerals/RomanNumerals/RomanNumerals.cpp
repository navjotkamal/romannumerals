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

int romanNumeralToDecimal(string &input)
{
    int result = 0;

    for (size_t character = 0; character < input.length(); character++)
    {
        // Get the decimal of the Roman Numeral Input
        int current = romanNumeralCharToDecimal(input[character]);

        // Check if end of list
        if (character + 1 < input.length())
        {
            int next = romanNumeralCharToDecimal(input[character + 1]);
            if (current >= next) // Compare them to see which one to use
            {
                result = result + current;
            }
            else
            {
                result = result + next - current;
                character++;
            }
        }
        else
        {
            result = result + current;
            character++;
        }
    }

    return result;
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
    cout << "Decimal numeral of " << string_input << " is " << romanNumeralToDecimal(string_input) << endl;

    // Test Code 2 - Given IV; Returns: 4
    string_input = "IV";
    cout << "Decimal numeral of " << string_input << " is " << romanNumeralToDecimal(string_input) << endl;

    cin.get();

    return 0;
}

