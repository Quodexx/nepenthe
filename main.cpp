//The program asks the user if he or she wants to convert lengths or
//weights. If the user chooses lengths, then the program asks the user if he
//or she wants to convert from feet and inches to meters and centimeters
//or from meters and centimeters to feet and inches. If the user chooses
//weights, a similar question about pounds, ounces, kilograms, and grams
//is asked. The program then performs the desired conversion. Have the
//user respond by typing the integer 1 for one type of conversion and 2
//for the other. The program reads the user’s answer and then executes an
//if-else statement. Each branch of the if-else statement will be a function
//call. The two functions called in the if-else statement will have function
//definitions that are very similar to the programs for Practice Programs 4
//and 7. Thus, these functions will be function definitions that call other
//functions in their function bodies; however, they will be very easy to write
//by adapting the programs you wrote for Practice Programs 4 and 7.

#include <iostream>
#include <string>

using namespace std;

int inputs(int x, int y);
int meters(int x, int y);
int feet(int x, int y);
bool again();
int getInput(string title);
int choice(int x, int y);
int length(int x, int y);
int weight(int x, int y);


int main()
{
        int answer, firstNum, secondNum;
        do
        {
            cout << "Select one:"<<endl
                 << "1. convert lengths, or" << endl
                 << "2. convert weights? ";
            firstNum = getInput("first");
            secondNum = getInput("second");
            cin >> answer;
            if (answer ==1){
                length(firstNum, secondNum);
            }
            else{
                weight(firstNum, secondNum);
            }
        }while(again());
        return 0;
}
    //get input
    int getInput(string title)
    {
        int number;
        cout<<"Please enter your "<<title<<" value: ";
        cin>>number;
        return number;
    }

    // 1. length chose feet-inches or meters-centimeters
    int length(int x, int y)
    {
        int answer, firstNum, secondNum;
        cout << "Select one:"<<endl
             << "1. convert feet-inches, or" << endl
             << "2. convert meters-centimeters? ";
        firstNum = getInput("first");
        secondNum = getInput("second");
        cin >> answer;
        if (answer ==1){
            feet(firstNum, secondNum);
        }
        else{
            meters(firstNum, secondNum);
        }

        // 2. weight chose pounds-ouncs or kilos-grams
        int length(int x, int y)
        {
            cout << "Select one:"<<endl
                 << "1. convert pounds-ounces, or" << endl
                 << "2. convert kilos-grams? ";
            firstNum = getInput("first");
            secondNum = getInput("second");
            cin >> answer;
            if (answer ==1){
                pounds(firstNum, secondNum);
            }
            else{
                kilos(firstNum, secondNum);
            }
    }while(again());
    return 0;



    // convert meters to feet
    int feet(int x, int y)
    {
        double feet, inches;

        feet = x/.348;
        inches = y*0.3937007874;
        cout << x << " meters and " << y << " centimeters is " << feet
             <<" feet and " << inches << " inches.\n";
        return (feet);
    }

    //convert feet to meters
    int meters(int x, int y)
    {
        double mtrs, cmtrs;
        mtrs = 0.348 * x;
        cmtrs = y*2.54;
        cout << x << " feet and " << y << " inches is " << mtrs <<" meters and "
             << cmtrs << "centimeters.\n";
        return (mtrs);
    }

    // choose kilos-grams or pounds-ounces
    {
        do
        {
            firstNum = getInput("first");
            secondNum = getInput("second");

            cout << "How do you want to process? - enter "<<endl
                 << "1 for Convert pounds/ounces to kilos/grams or" << endl
                 << "2 for Convert kilos/grams to pounds/ounces  ";
            cin >> answer;
            if (answer ==1){
                pounds(firstNum, secondNum);
            }
            else{
                kilos(firstNum, secondNum);
            }
        }while(again());
        return 0;
    }

    // conversion: 1 kilo = 2.2046 pounds, 1000 grams = 1kilogram,
    // 16 ounces = 1 pound
    // convert kilos to pounds
    int pounds(int x, int y)
    {
        double pounds, ounces;

        pounds = x * 0.453592;
        ounces = y*28.3495;
        cout << x << " kilos and " << y << " centigrams is " << pounds
             <<" pounds and " << ounces << " ounces.\n";
        return (pounds);
    }

    //convert pounds to kilos
    int kilos(int x, int y)
    {
        double kls, gms;
        kls = x *2.2046;
        gms = y*0.035274;
        cout << x << " pounds and " << y << " ounces is " << kls <<" kilos and " << gms
             << "grams.\n";
        return (kls);
    }



    // iteration loop
    bool again()
    {
        char ans;
        cout<<endl
           <<"Do you want to run it again? ";
        cin>>ans;
        if(ans == 'Y' || ans == 'y')
            return true;
        else
            return false;
        return ans == 'Y' || ans == 'y';
    }
