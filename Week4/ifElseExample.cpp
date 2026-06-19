/*
@author: Elijah Silkworth
@date: 6/18/2026
@purpose: Example of the if-else statement
*/

#include <iostream> //include iostream for in and out
#include <iomanip> //include iomanip for setprecision and fixed
using namespace std; //use standard namespace for convenience

int main(){
    const int HIGH_SCORE = 95; //sets a constant for the high score
    int score1, score2, score3; //defines score1,2 and 3 as integers
    double average; //defines the average as a double for more precision

    cout << "Enter three test scores: "; //prompt the user to enter three scores
    cin >> score1 >> score2 >> score3; //takes the three scores as inputs
    average = (score1 + score2 + score3) / 3.0; //take the average the three scores
    cout << fixed << setprecision(2); //output the average with two decimal places
    cout << "Average score: " << average << endl; //print the average score to the console
    

    if (average >= HIGH_SCORE){ //if the average is greater than or equal to high score
        cout << "Congratulations! You have a high score!" << endl; //congratulate the user
    } 
    else { //otherwise,
        cout << "Oops! You are a complete and total failure! Better luck next time!" << endl; //tell the user they SUCK!!!!
    }
  //booyah
    return 0; //end code
    
}