/*
@author: Elijah Silkworth
@date: 7/18/2026
@purpose: Print the days of the week to the console using an array and for loop.
*/

#include <iostream> //for input and output
#include <string> //for strings
using namespace std; //use standard namespace for convenience

int main(){ //start main
    const int days = 7; //set days equal to 7
    string day[days] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"}; 
    //initialize the array with the days of the week ^^^

    for(int count = 0; count < days; count++){ //initialize the count at zero, if count is less than days: add 1 to count, 
        cout <<"Day " << (count + 1) << ": " << day[count] << endl; //output the day of the week
    } //othersise:

return 0; //end 
}