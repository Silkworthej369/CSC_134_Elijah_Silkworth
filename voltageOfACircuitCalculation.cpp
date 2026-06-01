/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: calculate the voltage of a circuit with a current (I) of 10 amps and a resistance (R) of 2 ohms.
*/

//include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main() {
    int I = 10; 
    int R = 2; 
    double V = I * R; // V = I * R
    std::cout << "The voltage of a circuit with a current of " << I << " amps and a resistance of " << R << " ohms is: " << V << " volts." << std::endl;
    return 0;
}