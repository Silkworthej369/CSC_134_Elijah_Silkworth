/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Calculate the volume of a sphere with a given radius of 7.
*/

//include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main(){
    double PI = 3.1415; //define the value of PI
    int r = 7; //define the radius of the sphere
    double V = (4.0/3.0) * PI * pow (r, 3); //calculate the volume of the sphere using the formula V = (4/3) * PI * r^3
    std::cout << "The volume of a sphere with a radius of 7 is: " << V << std::endl; //output the volume of the sphere to the console
    return 0;
}