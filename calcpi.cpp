// An approximate value of pi can be calculated using the
// series given below:
// pi = 4 [ 1 – 1/3 + 1/5 – 1/7 + 1/9 ... + ((–1)n)/(2n + 1) ]
// Write a C++ program to calculate the approximate value of pi
// using this series. The program takes an input n that determines
// the number of terms in the approximation of the value of pi
// and outputs the approximation. Include a loop that allows the
// user to repeat this calculation for new values n until the user
// says she or he wants to end the program.

#include <iostream>

using namespace std;

int main()
    {
    int terms;
    int count = 0;
    long double sum=0.0;
    long double denom=-1.0;
    char cont = 'y';

    do
      {
      cout << "How many terms? "; // max terms is 2147483647
      cin >> terms;							//Input number of terms
      if (terms >= 2147483647){
        cout << "Max terms is 2147483647. Please enter a lower number of terms: ";
        cin >> terms; // there is a minimum number of terms, incorrect at 5, hangs at 4
       }
      else

      while (count != terms)
        {
        count++;
        denom = denom + 2;
        if (count % 2 != 0)
        {
           sum = sum + 1/denom;
        }
        else
        {
            sum = sum - 1/denom;
        }
        }
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(100);
        cout << "PI with " << terms << " terms is: " << 4.0*sum << endl;
        cout << "would you like to continue? ";
        cin >> cont;
        }
    while (cont == 'y');


    return 0;
    }

// How many terms? 14
// PI with 14 terms is: 3.0702546177791836697328758942759918681986164301633834838867187500000000000000000000000000000000000000
// would you like to continue? y
// How many terms? 100
// PI with 100 terms is: 3.1315929035585527643714004453201482647273223847150802612304687500000000000000000000000000000000000000
// would you like to continue? y
// How many terms? 1000
// PI with 1000 terms is: 3.1405926538397929265438585089142975448339711874723434448242187500000000000000000000000000000000000000
// would you like to continue? y
// How many terms? 10000
// PI with 10000 terms is: 3.1414926535900432405263443813581147878721822053194046020507812500000000000000000000000000000000000000
// would you like to continue? y
// How many terms? 100000
// PI with 100000 terms is: 3.1415826535897934917562074330632526653062086552381515502929687500000000000000000000000000000000000000
// would you like to continue? y
// How many terms? 1000000
// PI with 1000000 terms is: 3.1415916535897931852541753450225314736599102616310119628906250000000000000000000000000000000000000000
// would you like to continue? n
// Press <RETURN> to close this window...
