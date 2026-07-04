/*
@author: Elijah Silkworth
@date: 7/1/2026
@purpose: The program should allow the user to input a number, and run a loop for that many times, displaying the number of iterations to the user each time the loop executes. 
*/

#include <iostream> //include iostream for input and output
using namespace std; //include the standard namespace for convenience

int main() { //start
    int duration; //initialize the duration variable

    cout << "Enter the integer.\n"; //prompt the user to enter an integer
    cin >> duration; //set the entered integer as the duration target

    for (int i = 0; i < duration; i++) { //run the loop if the number of iterations is less than the duration, add to the iterations incrementally 
        cout << i << endl; //output the number of iterations
    }
return 0; //end
}