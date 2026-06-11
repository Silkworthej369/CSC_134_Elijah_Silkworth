/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Calculate the area of a circle with a given radius of 15.
*/

//include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main(){
    double PI = 3.1415; //define the value of PI
    int r = 15; //define the radius of the circle
    double A = PI * pow (r, 2); //calculate the area of the circle using the formula A = PI * r^2
    std::cout << "The area of a circle with a radius of 15 is: " << A << std::endl; //output the area of the circle to the console
    return 0;
}