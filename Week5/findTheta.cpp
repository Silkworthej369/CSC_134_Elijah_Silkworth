/*
@author: Elijah Silkworth
@date: 6/25/2026
@purpose: Find theta of a triangle and determine if it is a 3-4-5 triangle or not.
*/

#include <iostream> //include iostream for input and output
#include <iomanip> //include iomanip for setprecision
#include <cmath> //include cmath for complex mathematical funcitons
using namespace std; //include the standard namespace for convenience

int main(){ //start program
    int x = 3; //define side x as 3
    int y = 4; //define side y as 4

    double c = sqrt((pow(x,2))+(pow(y,2))); //calculate c using pythagorean theorem

    double thetaRad = atan2(y,x); //define thetaRad as theta ajacent to leg x in radians
    double thetaDeg = thetaRad * (180 / 3.14159265); //convert to degrees and assign the value to thetaDeg
    thetaDeg = round(thetaDeg * 100) / 100; //round thetaDeg to 2 decimal places 

    if (thetaDeg == 53.13){ //if thetaDeg is 53.13, do
        cout <<"This is a 3-4-5 triangle"; //print that it is a 3-4-5 triangle
    } else { //otherwise,
        cout <<"This is NOT a 3-4-5 triangle."; //print that it is NOT a 3-4-5 triangle
    }

return 0; //end code
}