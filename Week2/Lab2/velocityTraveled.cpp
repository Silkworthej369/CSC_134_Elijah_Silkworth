/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: calculate the velocity if a distance of 400 miles is traveled over a span of 4 hours
*/

// include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main() {
    int d = 400; 
    int t = 4;
    double v = d / t; // velocity = distance / time
    std::cout << "The velocity if a distance of " << d << " miles is traveled over a span of " << t << " hours is: " << v << " mph." << std::endl;
    return 0;
}