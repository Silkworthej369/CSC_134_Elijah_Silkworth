/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Add 2 floating point numbers together and print the result to the console.
*/

// Include the iostream library for input/output operations
#include <iostream>
// Use the standard namespace to avoid prefixing std:: before standard library names
using namespace std;

int main(){
    float a, b; // Declare two floating point variables for input

    cout << "Enter two floating point numbers (separated by a space): "; // Prompt the user for input

    cin >> a >> b; // Take input for two floating point numbers a and b

    float sum = a + b; // Calculate the sum of a and b and store it in the variable sum

    cout << sum << endl; // Print the result to the console
    
    return 0;
}