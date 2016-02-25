// Write a program that accepts a year written as a four-digit Arabic
// (ordinary) numeral and outputs the year written in Roman numerals.
// Important Roman numerals are V for 5, X for 10, L for 50, C for 100,
// D for 500, and M for 1,000. Recall that some numbers are formed by
// using a kind of subtraction of one Roman “digit”; for example, IV is
// 4 produced as V minus I, XL is 40, CM is 900, and so on. A few sample
// years: MCM is 1900, MCML is 1950, MCMLX is 1960, MCMXL is 1940, MCMLXXXIX is
// 1989. Assume the year is between 1000 and 3000. Your program should include
// a loop that lets the user repeat this calculation until the user says
// she or he is done.
// convert year in Arabic numerals to Roman Numerals
#include <iostream>

using namespace std;

// inputs
int ar_year = 0;
int num_M = 0; /* 1000 years = M */
int num_D = 0; /* 500 years = D */
int num_C = 0; /* 100 years = C */
int num_L = 0; /* 50 years = L */
int num_X = 0; /* 10 years = X */
int num_V = 0; /* 5 years = V */
int num_I = 0; /* 1 year = I */

// working variables
int remainder = 0;
char cont = 'y';

int main()
{       while (cont == 'y')

    {
        cout << "Change year from Arabic to Roman" << endl;
        cout << "Enter Arabic year ";
        cin >> ar_year;
        int n = 0;

        num_M = ar_year/1000; remainder = ar_year % 1000;
        for (n =1; n <= num_M; n++)
            cout << "M"; /* get 1000s */

        if (remainder >= 900) {
            cout << "CM"; /* get 900 */
            remainder = remainder - 900;
        }

        num_D = remainder/500; remainder = remainder % 500;
        for (n=1; n <= num_D; n++)
            cout << "D"; /* get 500 */
        if (remainder >= 400) {
            cout << "CD"; /* get 400 */
            remainder = remainder - 400;
        }

        num_C = remainder/100; remainder = remainder % 100;
        for (n =1; n <= num_C; n++)
            cout << "C"; /* get 100s */
        if (remainder >= 90) {
            cout << "XC"; /* get 90*/
            remainder = remainder - 90;
        }

        num_L = remainder/50; remainder = remainder % 50;
        for (n =1; n <= num_L; n++)
            cout << "L";
        if (remainder >= 50) {
            cout << "XL"; /* get 40 */
            remainder = remainder - 40;
        }

        num_X = remainder/10; remainder = remainder % 10;
        for (n =1; n <= num_X; n++)
            cout << "X";
        if (remainder >= 9) {
            cout << "IX"; /* get 9 */
            remainder = remainder - 9;
        }

        num_V = remainder/5; remainder = remainder % 5;
        for (n =1; n <= num_V; n++)
            cout << "V";
        if (remainder >= 4) {
            cout << "IV"; /* get  4 */
            remainder = remainder - 4;
        }

        num_I = remainder/1;
        for (n =1; n <= num_I; n++)
            cout << "I";

        cout << endl<<"Would you like to keep going? If so enter 'y', otherwise anything else to exit.\n";
        cin >> cont;
    }

        return 0;
}
