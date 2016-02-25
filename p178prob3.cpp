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
{
    // do while want to continue
    do
    {
    cout << "Change year from Arabic to Roman" << endl;
    cout << "Enter Arabic year ";
    cin >> ar_year;
    int n = 0;

    num_M = ar_year/1000; remainder = ar_year % 1000;
    for (n =1; n <= num_M; n++)
        cout << "M"; // get 1000s
    if (remainder >= 900) {
        cout << "CM"; // get 900
        remainder = remainder - 900; }

    num_D = remainder/500; remainder = remainder % 500;
    for (n=1; n <= num_D; n++)
        cout << "D"; // get 500
    if (remainder >= 400) {
        cout << "CD"; // get 400
        remainder = remainder - 400;}

    num_C = remainder/100; remainder = remainder % 100;
    for (n =1; n <= num_C; n++)
        cout << "C"; // get 100s
    if (remainder >= 90) {
        cout << "XC"; // get 90
        remainder = remainder - 90;}

    num_L = remainder/50; remainder = remainder % 50;
    for (n =1; n <= num_L; n++)
        cout << "XL";
    if (remainder >= 40) {
        cout << "XL"; // get  40
        remainder = remainder - 40;}

    num_L = remainder/50; remainder = remainder % 50;
    for (n =1; n <= num_L; n++)
        cout << "L";
    if (remainder >= 50) {
        cout << "XL"; // get 40
        remainder = remainder - 40;}

    num_X = remainder/10; remainder = remainder % 10;
    for (n =1; n <= num_X; n++)
        cout << "X";
    if (remainder >= 9) {
        cout << "IX"; // get 9
        remainder = remainder - 9;}

    num_V = remainder/5; remainder = remainder % 5;
    for (n =1; n <= num_V; n++)
        cout << "V";
    if (remainder >= 4) {
        cout << "IV"; // get  4
        remainder = remainder - 4;}

    num_I = remainder/1;
    for (n =1; n <= num_I; n++)
        cout << "I";

    cout << endl;

    cout << "Enter 'y' to continue.";
    cout << "Enter any other key to exit."  << endl;
    cin >> cont;
    }
    while (cont == 'y');
    cout << "Thanks for playing." << endl << endl;
    return 0;
}
