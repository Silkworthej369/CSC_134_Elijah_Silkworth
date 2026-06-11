/*
@author: Elijah Silkworth
@date: 7/11/2026
@purpose: Calculate the average high temperature of 3 cities for the month of July and increase the temperature by 2%.
*/

//include iostream for input and output
#include <iostream>
//include cmath for mathematical functions
#include <cmath>

int main(){
    double NY = 85.0; //define the temperature for New York
    double D = 88.0; //define the temperature for Denver
    double P = 106.0; //define the temperature for Phoenix

    double AverageHigh = (NY + D + P) / 3; //calc. the average high temp for all cities
    double AvgHighIncrease = AverageHigh * 1.02; //increase avg high by 2%

    // print increased result to console
    std::cout << "The average high temperature for the month of July in New York, Denver, and Phoenix increased by 2 percent is: " << AvgHighIncrease << " degrees Fahrenheit." << std::endl; 
    return 0;
}