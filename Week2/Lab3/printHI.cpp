/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: print "Hi!" to the console using the character data type.
*/

// Include the iostream library for input/output operations
#include <iostream>
// Use the standard namespace to avoid prefixing std:: before standard library names
using namespace std;

int main(){
    char H = 'H'; //set the character variable H to the character 'H'
    char i = 'i'; //set the character variable i to the character 'i'
    char exclamation = '!'; //set the character variable exclamation to the character '!'

    cout << H << i << exclamation << endl; // Print the characters to the console in the correct order

    return 0;
}