/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Use the string class to print "Today I am 25 years old!" to the console.
*/

// Include the iostream library for input/output operations
#include <iostream>
// Include the string library to use the string class
#include <string>
// Use the standard namespace to avoid prefixing std:: before standard library names
using namespace std;

int main(){
    string verbiage = "Today I am "; // Set the string variable verbiage to "Today I am"
    string age = "25"; // Set the string variable age to "25"
    string verbiage_end = " years old!"; // Set the string variable verbiage_end to "years old!"

    cout << verbiage << age << verbiage_end << endl;
}