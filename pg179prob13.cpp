
//Holy digits Batman! The Riddler is planning his next caper
// somewhere on Pennsylvania Avenue. In his usual sporting fashion,
// he has left the address in the form of a puzzle. The address on
// Pennsylvania is a four-digit number where:
// •	 All four digits are different
// •	 The digit in the thousands place is three times the digit in the tens place
// •	 The number is odd
// •	 The sum of the digits is 27
// Write a program that uses a loop (or loops) to find the address where the
// Riddler plans to strike.





#include <iostream>

using namespace std;

int main()
{
    int thousands = 0;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    //int digit;

    cout << "Figure out the address" << endl;
    for (thousands = 0; thousands <=9; ++thousands){
        for (hundreds = 0; hundreds <=9; ++hundreds){
            for (tens = 0; tens <=9; ++tens){
                for (ones = 0; ones <=9; ones +=2){
                    if (hundreds/3 == tens)
                        if(thousands+hundreds+tens+ones==27)
                            if((thousands!=hundreds)&&(hundreds!=tens)&&(tens!=ones)&&(hundreds!=ones))
                            {
                                cout << "The Address is " << thousands << hundreds << tens << ones << " Pennsylvania Avenue.\n";

                            }
                }
            }
        }
    }
    return 0;
} // main
