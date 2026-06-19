/*
@author: Elijah Silkworth
@date: 6/18/2026
@purpose: Obtain an integer from the user. Determine whether the integer is odd or even.
*/

#include <iostream> //include iostream for in and output
using namespace std; //use standard name space for convenience

int main() { 
    int number; //define number as an integer

    cout << "Enter an integer and I will tell you if it's odd or even."; //prompt the user to enter a number
    cin >> number; // take the input from the user
    
    if (number % 2 == 0) //if the remainder of the number divided by 2 is zero,
    cout << number << " is even."; //tell the user that the number is even

    else //otherwise, 
    cout << number << " is odd."; //tell the user that the number is odd
    return 0; //end

}