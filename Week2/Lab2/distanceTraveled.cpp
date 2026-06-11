/* 
@author: Elijah Silkworth 
@date: 6/1/2026
@purpose: calculate the distance traveled at a speed of 80mph over the span of 2 hours
*/

// include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main() {
    int s = 80; 
    int t = 2;
    double d = s * t; // distance = speed * time
    std::cout << "The distance traveled at a speed of " << s << " mph over the span of " << t << " hours is: " << d << " miles." << std::endl;
    return 0;
}