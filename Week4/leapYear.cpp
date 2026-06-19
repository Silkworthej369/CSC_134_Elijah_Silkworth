/*
@author: Elijah Silkworth
@date: 6/18/2026
@purpose: Determine whether an entered year is a leap year or not.
*/

#include <iostream> //inclue iostream for input and output
using namespace std; //include the standard namespace for convenience

int main(){
    int year; //define year as a integer

    cout <<"Enter a year and the program will tell you if it is a leap year or not!"; //prompt the user to enter a year
    cin >> year; //define the entered value as the year

    if (year % 400 == 0) { //if the year is divisible by 400...
        cout <<"The year you entered "<< year<<" is a leap year."; //print that the year entered is a leap year 
        // if the year isn't divisible by 400...
    } else if (year % 4 == 0 && year % 100 != 0){ //see if the year entered is divisible by 4 AND (&&) not divisible(!=) by 100
        cout <<"The year you entered "<< year<<" is a leap year."; //print that the year entered is a leap year

    } else { //if the year is not divisible by 4 AND not divisible by 100, then
        cout <<"The year you entered "<< year<<" is NOT a leap year."; //print that the year entered is NOT a leap year
    }
return 0; //end code
}