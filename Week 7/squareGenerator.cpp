/*
@author: Elijah Silkworth
@date: 7/11/2026
@purpose: Generate a square of stars with a side length specified by the user.
*/

#include <iostream> //for input and output
using namespace std; //for convenience

int main(){ //start
    int sideLength; //initialize sideLength

    cout << "Enter the desired side length for the square (as an integer):\n"; //prompt the user to enter a side length for the square
    cin >> sideLength; //take the entered value as sideLength

    for(int i = 1; i <= sideLength; i++){ //int i at 1, if i is less than or equal to sideLength, add 1 to i, 
        for(int row = 1; row <= sideLength; row++){// int row at 1, if row is less than or equal to sidelength, add 1 to row,
            cout << "* "; //print a star to the console with a space
        }//otherwise:
        cout << endl; //end the line
    } //otherwise:
return 0; //end
}
