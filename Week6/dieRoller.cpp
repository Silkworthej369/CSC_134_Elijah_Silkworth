/*
@author: Elijah Silkworth
@date: 7/4/2026
@purpose: Prompt the user to enter how many times a die should be rolled. Display the result to the console each loop iteration.
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namepsace for convenience

int main(){ //start main

srand(static_cast<unsigned int>(time(0))); //seed the random number generator
int numRolls; //initialize numRolls

cout << "Enter the amount of times the die should be rolled:\n"; //prompt the user to enter the amount of times the die should be rolled
cin >> numRolls; //take the entered value as numRolls

for (int i = 1; i <= numRolls; i++){ //initialize i at 0, add 1 incrementally to i, when i is less than or equal to numRolls, do:

    int rng = ( rand() % 6 + 1); //run the random number generator, take the result of it as rng
    cout << "The result of roll " << i << " is " << rng << endl; //print the result of the roll to the console

}
return 0; //end main
}
