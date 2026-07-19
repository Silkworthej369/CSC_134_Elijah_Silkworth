/*
@author: Elijah Silkworth
@date: 7/10/2026
@purpose: Capture an integer from the user. The program will generate a right triangle with the amount of stars speficied by the user
*/

#include <iostream> //include iostream for input and output
using namespace std; //use the standard namespace for convenience

int main(){ //start
    int maxRows; //initialize maxRows

    cout << "Enter the amount of rows for the right triangle:\n"; //prompt user to specify value for maxRows
    cin >> maxRows; //take the users input as maxRows
    cout << "\n\n"; //2 enters for neatness

    for(int i = 1; i<= maxRows; i++){ //set i=1, if i is less than or equal to maxRows, add 1 to i, 
        for(int rowNum = 1; rowNum <= i; rowNum++){ //set rowNum equal to 1, if rowNum is less than or equal to i, add 1 to rowNum,
            cout <<"*"; //output a star
        }
        cout << endl; //end the line after the row loop
    }
return 0; //end
}