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
    // int sum_of_the_digits = 0;
    int SUM = 27;
    int next = 0;
    int divvy = 0;
    int thousands = 0;
    int hundreds = 0;
    int tens = 0;
    int ones = 0;
    int digit;

    cout << "Figure out the address" << endl;
    for (digit=1; digit <=10; digit++)
    {
        tens = digit;
        cout << "tens = " << tens << endl; //debug
        thousands = (3*tens);
        cout << "thousands = " << thousands << endl; //debug
        divvy = (SUM - thousands);
        cout << "divvy = " << divvy << endl; // debug
        //next = digit;
        do
        {
            if ((digit != thousands) & (digit != tens)){ // can't have numbers repeat

                if ( divvy %2 == 0){
                    cout << divvy << " is even.\n";
                }
                else {
                    cout << divvy << " is odd.\n";
                    // need to figure out the numbers here
                    hundreds = (divvy/2); // divvy will not be the num
                    cout << "hundreds = " << hundreds << endl;
                    tens = (divvy/2) + 1;
                    cout << "tens = " << tens << endl;
                    ones = hundreds +1;
                    cout << "ones = " << ones << endl;
                    if (thousands+hundreds+tens+ones==27){
                        cout << "address is " << thousands << hundreds << tens << ones << endl;
                    }
                }// else
            } else
               digit++;
        } while (digit<= 9); // do
    } // for
    return 0;
} // main

