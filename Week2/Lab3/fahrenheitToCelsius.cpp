/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Convert Fahrenheit to Celsius.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid typing std:: before every standard library function
using namespace std;

int main(){
    float fahrenheit, celsius; //declare variables for Fahrenheit and Celsius
    cout << "Enter a temperature in Fahrenheit: "; //prompt the user to enter a temperature in Fahrenheit
    cin >> fahrenheit; //read the input from the user and store it in the fahrenheit variable
    celsius = (fahrenheit - 32) * 5 / 9; //convert Fahrenheit to Celsius using the formula: C = (F - 32) * 5 / 9
    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius." << endl; //output the result to the user
    return 0; 
}