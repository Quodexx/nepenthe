//not functional version
//Your sports league uses the following lottery system to select draft picks for
//the four worst teams in the league:

#include <iostream>
#include <string>
#include <cstdlib> // for random number generation
#include <ctime>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */

using namespace std;

// Write a main function that outputs the draft order (e.g., a possible order is:
// second-to-last picks 1, last place picks 2, third-to-last picks 3, and
//fourth-to-last picks 4). If you change the random seed then the order should
// differ if you run the program multiple times.




int main()
{
    void srand (unsigned int seed);
    char cont = 'y';
    char pick = 0, prev_pick = 0;

    do
   {
        // To determine the first pick in the draft a ball is selected at random. The team
        //owning that ball gets the first pick. The ball is then put back in the urn.
        // To determine the second pick in the draft a ball is selected at random. If the
        //ball belongs to the team that got the first pick then it is put back in and the
        //process repeats until a ball is selected that does not belong to the first pick.
        //To determine subsequent picks in the draft the process repeats until a ball
        //is selected that belongs to a team that has not already been chosen.
        srand(time(0));
        get_ball:
        long pick = (rand() % 40) +1;
        switch(pick)
        {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '10':
        case '11':
        case '12':
        case '13':
        case '14':
        case '15':
        case '16':
        case '17':
        case '18':
        case '19':
        case '20':
            cout << "Pick is from last placed team\n";
            cout << "Return ball and pick again";
            break;
        case '21':
        case '22':
        case '23':
        case '24':
        case '25':
        case '26':
        case '27':
        case '28':
        case '29':
        case '30':
            cout << "Pick is from second to last placed team\n";
            cout << "Return ball and pick again";
            break;
        case '31':
        case '32':
        case '33':
        case '34':
        case '35':
        case '36':
            cout << "Pick is from third to last placed team\n";
            cout << "Return ball and pick again";
            break;
        case '37':
        case '38':
        case '39':
        case '40':
            cout << "Pick is from fourth to last placed team\n";
            cout << "Return ball and pick again";
            break;
        }
        cout << "Your ball is number " << pick << endl;
        if (pick == prev_pick){
            cout << "Can't pick from same team consecutively, returning ball and picking again.\n";
            goto get_ball;
        }
        else {

        }

        prev_pick = pick;


    cout << "Would you like continue?\n";
    cin >> cont;
}
while (cont == 'y' || cont == 'Y');

cout << "Thank you for playing\n";
return 0;
}










//  Write a function that takes as input which of the four teams have already
// been granted picks, simulates selecting a ball from the urn according to the
// lottery rules, and returns the team that belongs to the selected ball. You get
//to choose how to design your function to perform these actions.


// For a slightly harder version of the problem, allow the user to input the
//names of the four teams. The program should then output the team names
//in the draft order.

//char16_t team;
//string tempstring, team1, team2, team3, team4;

//cout << "National League Draft Pick" << endl;
//cout "Pick lowest ranking four teams\n;"
//cout << "1 - Arizona Diamond Backs\n";
//cout << "2 - Atlanta Braves\n";
//cout << "3 - Chicago Cubs\n";
//cout << "4 - Cincinnati Reds\n";
//cout << "5 - Colorado Rockies\n";
//cout << "6 - Los Angeles Dodgers\n";
//cout << "7 - Miami Marlins\n";
//cout << "8 - Milwauki Brewers\n";
//cout << "9 - New York Mets\n";
//cout << "10 - Philadelphia Phillies\n";
//cout << "11 - Pittsburg Pirates\n";
//cout << "12 - San Diego Padres\n";
//cout << "13 - San Francsisco Giants\n";
//cout << "14 - St. Louis Cardinals\n";
//cout << "15 - Washington Nationals\n";

//for (n=1, n<=4, n++)
//   cout "Pick a team\n";
// cin >> team


//Your ball is number 34
//Would you like continue?
//y
//Your ball is number 38
//Would you like continue?
//y
//Your ball is number 36
//Would you like continue?
//y
//Your ball is number 39
//Would you like continue?
//y
//Your ball is number 36
//Would you like continue?
//y
//Your ball is number 18
//Would you like continue?/
//y
//Your ball is number 18
//Can't pick from same team consecutively, returning ball and picking again.
//Your ball is number 15
//Would you like continue?
//n
//Thank you for playing
//Press <RETURN> to close this window...

