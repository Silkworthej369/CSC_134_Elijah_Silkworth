/*
@author: Elijah Silkworth
@date: 6/1/2026
@purpose: Calculate the square footage of a room with given dimensions.
*/

//include iostream for input and output
#include <iostream>

int main(){
    double L = 50;
    double W = 32; 
    double squareFootage = L * W; //calculate the square footage using the formula square footage = length * width
    std::cout << "The square footage of a room with dimensions 50 by 32 is " << squareFootage << " square feet." << std::endl; //output the square footage to the console
    return 0;
}