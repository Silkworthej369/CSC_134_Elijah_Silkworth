/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: calculate the force of an object with a mass of 10 kg and an acceleration of 9.81 m/s^2 using the formula F = m * a
*/

// include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main() {
    int m = 10; 
    double a = 9.81; 
    double F = m * a; // F = m * a
    std::cout << "The force of an object with a mass of " << m << " kg and an acceleration of " << a << " m/s^2 is: " << F << " newtons." << std::endl;
    return 0;
}